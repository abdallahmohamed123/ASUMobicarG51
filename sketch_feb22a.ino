const int led1=7;
const int led2=6;
const int led3=5;
const int led4=4;
int i=0;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);

}

void loop() {
  while(i==0){
    digitalWrite(led1,HIGH);
    delay(500);
     digitalWrite(led1,LOW);
    delay(500);
     digitalWrite(led2,HIGH);
    delay(500);
     digitalWrite(led2,LOW);
    delay(500);
     digitalWrite(led3,HIGH);
    delay(500);
     digitalWrite(led3,LOW);
    delay(500);
     digitalWrite(led4,HIGH);
    delay(500);
     digitalWrite(led4,LOW);
    delay(500);
    
     digitalWrite(led4,HIGH);
    delay(500);
     digitalWrite(led4,LOW);
    delay(500);
     digitalWrite(led3,HIGH);
    delay(500);
     digitalWrite(led3,LOW);
    delay(500);
     digitalWrite(led2,HIGH);
    delay(500);
     digitalWrite(led2,LOW);
    delay(500);
     digitalWrite(led1,HIGH);
    delay(500);
     digitalWrite(led1,LOW);
    delay(500);
    
  }


}
