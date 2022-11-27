#include <Servo.h>

int Servopin1=11;

int Servopin2=10;

int Servopin3=9;

int Servopin4=6;

int inval;

int servopos1;

int servopos2;

int servopos3;

int servopos4;



Servo Myservo1;

Servo Myservo2;

Servo Myservo3;

Servo Myservo4;



void setup() {

  // put your setup code here, to run once:

Myservo1.attach(Servopin1);

Myservo2.attach(Servopin2);

Myservo3.attach(Servopin3);

Myservo4.attach(Servopin4);

Serial.begin(9600);



}



void loop() {

  // put your main code here, to run repeatedly:

if (Serial.available()>0) {

  inval=Serial.parseInt();
  Serial.println("inval  : ");
  Serial.println(inval);

 

}

if (inval>0 && inval<=180) { 

  servopos1=inval;

   Myservo1.write(servopos1);

}

  if (inval>180 && inval<=361) {

  servopos2=inval-181;

   Myservo2.write(servopos2);

}

if (inval>361 && inval<=542) {

  servopos3=inval-362;

   Myservo3.write(servopos3);

}

if (inval>542 && inval<=722) {

  servopos4=inval-543;

   Myservo4.write(servopos4);

}

}
