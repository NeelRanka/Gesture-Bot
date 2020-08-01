#include<SoftwareSerial.h>
SoftwareSerial bt(3,4);
void forward();
void backward();
void left();
void right();
void stopp();

void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);//motor 1
  pinMode(9,OUTPUT);//motor 1
  pinMode(10,OUTPUT);//motor 2
  pinMode(11,OUTPUT);//motor 2
  pinMode(12,OUTPUT);//for enable pin
  pinMode(13,OUTPUT);//for enable pin
  Serial.begin(38400);
  bt.begin(38400);
  digitalWrite(12,HIGH);//always high enable pin
  digitalWrite(13,HIGH);//always high enable pin
}

void loop() {
  // put your main code here, to run repeatedly:
  int ip;
  //forward();
  //Serial.println(bt.available());
  if(bt.available())
  {
    //forward();
  ip=bt.read();
  //Serial.println(ip);
  if(ip=='F')
  {forward();
  Serial.print('F');}
  if(ip=='L')
  {left();
  Serial.print('L');}
  if(ip=='R')
  {right();
  Serial.print('R');}
  if(ip=='B')
  {backward();
  Serial.print('B');}
  if(ip=='S')
  {stopp();
  Serial.print('S');}
  }
  /*else
  {stopp();}*/
}

void forward()
{
  digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(10,1);
  digitalWrite(11,0);
}

void left()
{
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(10,1);
  digitalWrite(11,0);
}

void right()
{
  digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
}

void backward()
{
  digitalWrite(8,0);
  digitalWrite(9,1);
  digitalWrite(10,0);
  digitalWrite(11,1);
}

void stopp()
{
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
}
