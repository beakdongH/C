void setup() {
  pinMode(7, OUTPUT); // 7번 핀을 출력으로 설정
}

void loop() {
  digitalWrite(7, HIGH); // 솔레노이드 작동
  delay(1000);           // 1초 대기
  digitalWrite(7, LOW);  // 솔레노이드 정지
  delay(1000);           // 1초 대기
}
