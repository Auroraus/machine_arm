#include <Servo.h>
int pos=120;
int po=120;
Servo myservo1;
String comdata = "";
Servo myservo2;
Servo myservo3;
Servo myservo4;
void setup() {
  // put your setup code here, to run once:
myservo1.attach(8);
myservo2.attach(9);
myservo3.attach(10);
myservo4.attach(11);
Serial.begin(9600);
}
void oneup()
{
 pos=pos+5;
 if(pos<180)
 {
 myservo1.write(pos);              // tell servo to go to position in variable 'pos' 
}
delay(50);
}
void twoup()
{
 po=po+5;
 if(po<180)
 {
 myservo2.write(po);              // tell servo to go to position in variable 'pos'
 }
 delay(50);
}
void onedown()
{
 pos=pos-5;
 if(pos>0)
 {
 myservo1.write(pos);              // tell servo to go to position in variable 'pos'
   
}
delay(50);}
void twodown()
{
 po=po-5;
 if(po>0)
 {
 myservo2.write(po);              // tell servo to go to position in variable 'pos'
}
delay(50);
}
void threeup()
{
 pos=pos+5;
 if(pos<180)
 {
 myservo3.write(pos);              // tell servo to go to position in variable 'pos' 
}
delay(50);
}
void fourup()
{
 po=po+5;
 if(po<180)
 {
 myservo4.write(po);              // tell servo to go to position in variable 'pos'
 }
 delay(50);
}
void threedown()
{
 pos=pos-5;
 if(pos>0)
 {
 myservo3.write(pos);              // tell servo to go to position in variable 'pos'
   
}
delay(50);
}
void fourdown()
{
 po=po-5;
 if(po>0)
 {
 myservo4.write(po);              // tell servo to go to position in variable 'pos'
}
delay(50);
}
void loop() {
  //Serial.println("wait for command");
 /*while (Serial.available() > 0)  
    {
        comdata += char(Serial.read());
        delay(2);
    }
    if (comdata.length()>0)
    {
        Serial.println(comdata);ffffff5
        Serial.println(comdata.toInt());
        myservo1.write(comdata.toInt());
        comdata = "";
    }
*/
if(Serial.available())
{char i=Serial.read();
switch(i)
{
  case 'a':{oneup();break;}
  case 'b':{onedown();break;}
  case 'c':{twoup();break;}
  case 'd':{twodown();break;}
  case 'e':{threeup();break;}
  case 'f':{threedown();break;}
  case 'g':{fourup();break;}
  case 'h':{fourdown();break;}
  
}
}
}
