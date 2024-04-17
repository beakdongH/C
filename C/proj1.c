#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>

#define RST_PIN     D0        // RC522 reset 핀
#define SS_PIN      D2        // RC522 SS (Slave Select) 핀
#define SG90_PIN    D4        // SG90 서보 모터 신호 핀

MFRC522 mfrc522(SS_PIN, RST_PIN);  
Servo;

void setup() {
  Serial.begin(9600);   // 시리얼 통신 시작
  SPI.begin();          // SPI 통신 시작
  mfrc522.PCD_Init();   // RFID 모듈 초기화
  sg90.attach(SG90_PIN); 
}

void loop() {
  // RFID 카드 스캔
  if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) {
    String cardUID = "";
    for (byte i = 0; i < mfrc522.uid.size; i++) {
      cardUID += String(mfrc522.uid.uidByte[i] < 0x10 ? "0" : "");
      cardUID += String(mfrc522.uid.uidByte[i], HEX);
    }
    cardUID.toUpperCase();
    
    Serial.print("Scanned card UID: ");
    Serial.println(cardUID);

    // 특정 카드 UID인 경우에만 SG90 서보 모터를 180도 회전
    if (cardUID == " ??? ") { 
      sg90.write(180);  // 180도 회전
      delay(2000);      // 1초 대기
      sg90.write(0);    // 0도 회전
      delay(2000);      // 1초 대기
    }
  }
  mfrc522.PICC_HaltA(); // PICC를 비활성화
  delay(500);            
}
