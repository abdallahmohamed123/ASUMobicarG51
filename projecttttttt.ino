#include <SoftwareSerial.h>
SoftwareSerial bluetooth (10,11);//Rx,Tx (ARDUINO)
char data ;
#define trigPin 9
#define echoPin 12
int AF=5;//in1 
int AB=4;//in2
int BF=8;//in3  =>of the motor driver
int BB=7;//in4
char x;
int ENA = 6;
int ENB = 3;  
char mode;
char y;
float k;
int z=0;
String disatancrdelay;
String angledelay;
void setup() {
  // put your setup code here, to run once:
  bluetooth.begin(9600);
  
  pinMode(AF,OUTPUT);
  pinMode(AB,OUTPUT);
  pinMode(BF,OUTPUT);
  pinMode(BB,OUTPUT);
    pinMode (ENA, OUTPUT);
  pinMode (ENB, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  

}
void loop() {
   digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);   // Take reading on echo pin
  float  duration = pulseIn(echoPin, HIGH);

  // convert the time into a distance
  float   cm = duration / 29 / 2; 
  
  
  // put your main code here, to run repeatedly:
 

    if(bluetooth.available())
  {  
    data=bluetooth.read();
    switch(data){
    case'F'://go forward
       analogWrite(ENA, 255);
  analogWrite(ENB, 255);
    digitalWrite(AF,HIGH);
    digitalWrite(BF,HIGH);
    digitalWrite(AB,LOW);
    digitalWrite(BB,LOW);

          break;
         
    case'B'://go back
          analogWrite(ENA, 255);
  analogWrite(ENB, 255);
    digitalWrite(AF,LOW);
    digitalWrite(BF,LOW);
    digitalWrite(AB,HIGH);
    digitalWrite(BB,HIGH);
  
 
          break;
          
          case'L':// go left
                 analogWrite(ENA, 255);
  analogWrite(ENB, 255);
    digitalWrite(AF,HIGH);
    digitalWrite(BF,LOW);
    digitalWrite(AB,LOW);
    digitalWrite(BB,HIGH);
          break;
          
          case'R':// go right
                 analogWrite(ENA, 255);
  analogWrite(ENB, 255);
    digitalWrite(AF,LOW);
    digitalWrite(BF,HIGH);
    digitalWrite(AB,HIGH);
    digitalWrite(BB,LOW);
          break;
          
          case'm'://accurate distance         
      disatancrdelay="";
   while(1){
   if(bluetooth.available())
  {  
      x=bluetooth.read();
   if(x!='q'){
      disatancrdelay+=x;
      k=  disatancrdelay.toFloat();
}
if(x == 'q')
{ break;}

}
}
break;
          case'a'://acurate angle
  angledelay="";
while(1){
    if(bluetooth.available())
  {  
    y=bluetooth.read();
    if(y=='q'){
      break;
    }else{
     angledelay+=y;
    }
}
}

if(z==0){

  
analogWrite(ENA, 155);
  analogWrite(ENB, 155);
    
        digitalWrite(AF,HIGH);
    digitalWrite(BF,HIGH);
    digitalWrite(AB,LOW);
    digitalWrite(BB,LOW);
    delay(k);

           analogWrite(ENA, 155);
  analogWrite(ENB, 155);
   digitalWrite(AF,LOW);
    digitalWrite(BF,HIGH);
    digitalWrite(AB,HIGH);
    digitalWrite(BB,LOW);
    delay( angledelay.toFloat());

           analogWrite(ENA, 155);
  analogWrite(ENB, 155);
        digitalWrite(AF,HIGH);
    digitalWrite(BF,HIGH);
    digitalWrite(AB,LOW);
    digitalWrite(BB,LOW);
    delay(k);

           analogWrite(ENA, 155);
  analogWrite(ENB, 155);
   digitalWrite(AF,LOW);
    digitalWrite(BF,HIGH);
    digitalWrite(AB,HIGH);
    digitalWrite(BB,LOW);
    delay( angledelay.toFloat());

           analogWrite(ENA, 155);
  analogWrite(ENB, 155);
        digitalWrite(AF,HIGH);
    digitalWrite(BF,HIGH);
    digitalWrite(AB,LOW);
    digitalWrite(BB,LOW);
    delay(k);
    
           analogWrite(ENA, 155);
  analogWrite(ENB, 155);
   digitalWrite(AF,LOW);
    digitalWrite(BF,HIGH);
    digitalWrite(AB,HIGH);
    digitalWrite(BB,LOW);
    delay( angledelay.toFloat());
    
           analogWrite(ENA, 115);
  analogWrite(ENB, 115);
        digitalWrite(AF,HIGH);
    digitalWrite(BF,HIGH);
    digitalWrite(AB,LOW);
    digitalWrite(BB,LOW);
    delay(k);

           analogWrite(ENA, 115);
  analogWrite(ENB, 115);
   digitalWrite(AF,LOW);
    digitalWrite(BF,HIGH);
    digitalWrite(AB,HIGH);
    digitalWrite(BB,LOW);
    delay( angledelay.toFloat());

  analogWrite(ENA, 255);//circle
  analogWrite(ENB, 83);
  digitalWrite(AF, HIGH);
  digitalWrite(AB, LOW);
  digitalWrite(BF, HIGH);
  digitalWrite(BB, LOW);
  delay(4000);
  
    

  analogWrite(ENA, 255);//circle
  analogWrite(ENB, 83);
  digitalWrite(AF, HIGH);
  digitalWrite(AB, LOW);
  digitalWrite(BF, HIGH);
  digitalWrite(BB, LOW);
  delay(2000);
  

  analogWrite(ENA, 80);//circle
  analogWrite(ENB, 255);
  digitalWrite(AF, HIGH);
  digitalWrite(AB, LOW);
  digitalWrite(BF, HIGH);
  digitalWrite(BB, LOW);
  delay(3000);



    
    digitalWrite(AF,LOW);
    digitalWrite(BF,LOW);
    digitalWrite(AB,LOW);
    digitalWrite(BB,LOW);

z=2;
}
break;


   
         default:
    digitalWrite(AF,LOW);
    digitalWrite(BF,LOW);
    digitalWrite(AB,LOW);
    digitalWrite(BB,LOW);      
         
         
} 
  }
  }
     
   
  //car make 90 degree in 926 mel second
  //car make 65 cm in 10000 mel second
  //batterys at 12.2 v
