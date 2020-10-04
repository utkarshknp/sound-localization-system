
#include <Servo.h>
Servo myservo1, myservo2;
int a0 = A0;    // select the input pin for the potentiometer
int a1 = A1;    // select the input pin for the potentiometer
int a2 = A2;    // select the input pin for the potentiometer
int angle;
int d0=4;
int d1=3;
int d2=2;
void setup() 
{
  // declare the ledPin as an OUTPUT:
  pinMode(d0, INPUT);
  pinMode(d1, INPUT);
  pinMode(d2, INPUT);
  //Serial.begin(9600);
  myservo1.attach(5);
  myservo2.attach(6);
  Serial.begin(9600);
  myservo1.write(0);
  myservo2.write(0);
}

void loop() 
{
 int data0= digitalRead(d0);
 int data1= digitalRead(d1);
 int data2= digitalRead(d2);
 Serial.println();
 Serial.println(data0);
 Serial.println(data1);
 Serial.println(data2);
 Serial.println();
 if(data0==1 & data1==0 & data2==0)
 {
  angle=0;
 }
 if(data0==0 & data1==1 & data2==0)
 {
  angle=240;
 }
 if(data0==0 & data1==0 & data2==1)
 {
  angle=120;
 }
 else
 angle=0;
 if(angle<=180)
{
  myservo2.write(0);
  myservo1.write((160*angle)/180);
}
else
{
  myservo1.write(160);
  myservo2.write((190*(angle-180))/180);
 // delay(600);
}   
//int v0 = analogRead(a0);
//int v1 = analogRead(a1);
//int v2 = analogRead(a2);
//Serial.println(v0); 
//Serial.println(v1); 
//Serial.println(v2); 
//Serial.println();
Serial.println(angle);
delay(300);
}
