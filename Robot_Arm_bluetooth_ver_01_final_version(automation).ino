#include <Servo.h>
#include <SoftwareSerial.h>
SoftwareSerial myserial(0, 1);

int Servopin1=11; //base

int Servopin2=10; //shoulder

int Servopin3=9; //elbow

int Servopin4=6; //Gripper

int inval;

int servopos1;

int servopos2;

int servopos3;

int servopos4;
//
//int base;
//int elbow ;
//int shoulder;
//int gripper;

int base[10] ;
int shoulder[10];
int elbow[10];
int gripper[10];




Servo Myservo1;

Servo Myservo2;

Servo Myservo3;

Servo Myservo4;


int i;
int j;
int k ;
int l;

void setup() {

  // put your setup code here, to run once:

Myservo1.attach(Servopin1);

Myservo2.attach(Servopin2);

Myservo3.attach(Servopin3);

Myservo4.attach(Servopin4);
Serial.begin(9600);
myserial.begin(9600);
//
//myserial.println("start ");
//Myservo4.write(90);
//delay(1000);
//
//Myservo3.write(90);
//delay(1000);
//Myservo3.write(417);
//delay(1000);
//Myservo4.write(0);
//delay(1000);
//Myservo4.write(630);
//delay(1000);
//Myservo4.write(592);
//delay(1000);
//Myservo4.write(543);
//delay(1000);
//
//
//Myservo3.write(493);
//delay(1000);
//Myservo2.write(241);
//delay(1000);
//Myservo1.write(100);
//delay(1000);
//Myservo3.write(473);
//delay(1000);
//Myservo2.write(275);
//delay(1000);
//
//Myservo4.write(641);
//delay(1000);
//
//myserial.println("End");



}



void loop() {

  // put your main code here, to run repeatedly:

if (myserial.available()>0) {

  inval=myserial.parseInt();
//  myserial.println("inval  : ");
//  myserial.println(inval);
  Serial.println(inval);

 

}

if (inval>0 && inval<=180) { 

  servopos1=inval;

   
   Serial.println("BASE : ");
   base[l]=Serial.println(inval);
   Myservo1.write(servopos1);
   Serial.println("basearr : ");
   Serial.println(base[l]);
   l+=1;
   
}

  if (inval>180 && inval<=361) {

  servopos2=inval-181;

   
   Serial.println("Shoulder : ");
   Serial.println(inval);
   shoulder[k]=inval;
   Myservo2.write(servopos2);
   Serial.println("shouldarr : ");
   Serial.println(shoulder[k]);
  k=+1;
}

if (inval>361 && inval<=542) {

  servopos3=inval-362;
  Serial.println("Elbow : ");
   Serial.println(inval);
   elbow[j]=inval;
   Myservo3.write(servopos3);
   Serial.println("elbowarr : ");
   Serial.println(elbow[j]);
   j+=1;
}

if (inval>542 && inval<=722) {

  servopos4=inval-543;
  Serial.println("Gripper : ");
   Serial.println(inval);
   gripper[i]=inval;
   Myservo4.write(servopos4);
   Serial.println("griparr : ");
   Serial.println(gripper[i]);
       i+=1;

}
delay(1000);
}



//  elbow 417
// gripper 630
// gripper 592
// gripper 543

//elbow  493
//shouldre 241
//base 100
//elbow 473
// shoulder 275
//gripper 641

//automatic

//void automate(base ,shoulder ,elbow ,gripper ){
//Serial.println("Values are  : ")
// Serial.println(base);
// Serial.println(Shoulder);
// Serial.println(elbow);
// Serial.println(gripper);
// Serial.println("Done");
// delay(1000);
// 
// 
//  }
