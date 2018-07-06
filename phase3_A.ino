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
  //batterys at 12.2 v#include <SoftwareSerial.h>
SoftwareSerial bluetooth (10,11);//Rx,Tx (ARDUINO)
char data ;
#define trigPin 9
#defin

