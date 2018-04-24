void setup() {
  Serial.begin(9600);
  //PINMODE SETUP
  pinMode(trigPin,OUTPUT);
  //ultrasonic
  pinMode(echoPin,INPUT);
  // ultrasonic
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  pinMode (ENA, OUTPUT);
  pinMode (ENB, OUTPUT);

 pinMode(sensorleft,INPUT);
 pinMode(sensorcenter,INPUT);
 pinMode(sensorright,INPUT);



}
