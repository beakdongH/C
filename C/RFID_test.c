#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN   D2
#define SS_PIN    D4

MFRC522 mfrc522(SS_PIN, RST_PIN); // Create MFRC522 instance.

void setup() {
  Serial.begin(9600);
  Serial.println("Hello!");

  SPI.begin(); // Init SPI bus
  mfrc522.PCD_Init(); // Init MFRC522
  Serial.println("Waiting for an NFC card...");
}

void loop() {
  if (mfrc522.PICC_IsNewCardPresent()) { // If a new card is present
    if (mfrc522.PICC_ReadCardSerial()) { // Read the card's serial number
      Serial.print("UID: "); // Print UID
      for (byte i = 0; i < mfrc522.uid.size; i++) {
        Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
        Serial.print(mfrc522.uid.uidByte[i], HEX);
      }
      Serial.println();
      mfrc522.PICC_HaltA(); // Stop reading
    }
  }
}
