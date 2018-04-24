void max_right(int s) {
  analogWrite(ENA, s);
  analogWrite(ENB, s);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
void max_left(int s) {
  analogWrite(ENA, s);
  analogWrite(ENB, s);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
