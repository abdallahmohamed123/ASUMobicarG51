void steering_right(int s) {
  analogWrite(ENA, s);
  analogWrite(ENB, s/2);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
void steering_left(int s) {
  analogWrite(ENA, s/2);
  analogWrite(ENB, s);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
