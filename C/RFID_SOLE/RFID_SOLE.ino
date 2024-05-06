#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN 9  // RC522 리셋 핀
#define SS_PIN 10  // RC522 칩 셀렉트 핀

MFRC522 mfrc522(SS_PIN, RST_PIN); // RC522 객체 생성

byte success[] = {0x03, 0x6A, 0xC8, 0xC5};
void setup() {
  Serial.begin(9600); // 시리얼 통신 시작
  SPI.begin();        // SPI 통신 시작
  mfrc522.PCD_Init(); // RC522 초기화
  pinMode(7, OUTPUT); // 7번 핀을 출력으로 설정
}

void loop() {
  // RFID 태그가 새로 인식되었는지 확인
  if (!mfrc522.PICC_IsNewCardPresent() || !mfrc522.PICC_ReadCardSerial()) {
    return; // 태그가 없을 경우, 그대로 계속 대기
  }

  bool equal = true;
  
  for(int i=0;i<sizeof(success); i++){
    if(success[i] != mfrc522.uid.uidByte[i]){
      equal = false;
    }
  }
  if(equal){
    // RFID 태그가 인식되었을 경우
    Serial.println("RFID 태그가 인식되었습니다!");

    digitalWrite(7, HIGH); // 솔레노이드 작동
    delay(5000);           // 1초 대기
    digitalWrite(7, LOW);  // 솔레노이드 정지
  }

  else{
    Serial.println("not allow");
  }
  // 태그 UID 출력
      Serial.print("RFID 태그 UID: ");
      for (byte i = 0; i < mfrc522.uid.size; i++) {
        Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "); // 값이 한 자리일 경우 0을 추가
        Serial.print(mfrc522.uid.uidByte[i], HEX); // UID를 16진수로 출력
      }
      Serial.println();

  delay(1000); // 1초 대기

  // 태그 인식 종료
  mfrc522.PICC_HaltA();
}
