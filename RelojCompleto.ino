#include <Wire.h>
#include "RTClib.h"
RTC_DS1307 RTC;
int x=0;
int y=0;
int z=0;
int databorde=8;
int latch3=9;
int clock3= 10;
int datacont=11;
int latch2=12;
int clock2=13;
int h=0, m = 0, s = 0,d=0,me=0,a=0,ti=0,te=0,g=0;
int latch4=22;
int clock4=24;
int datapuntos=26; 


void recreo(){
  //barras o puntos
  digitalWrite(latch4, LOW);
  shiftOut(datapuntos, clock4, LSBFIRST, B010010);
  digitalWrite(latch4, HIGH);
  
       digitalWrite(latch2, LOW);
  for (x=0; x >= 0; x--)
  {
    for (y=59; y >= 0; y--)
  {
    for (z=10; z >= 0; z--)
  {  digitalWrite(latch2, LOW);
     if(x>=50&&x<60)
     shiftOut(datacont, clock2, LSBFIRST, x+30);
    if(x>=40&&x<50)
      shiftOut(datacont, clock2, LSBFIRST, x+24);
    if(x>=30&&x<40)
      shiftOut(datacont, clock2, LSBFIRST, x+18);
    if(x>=20&&x<30)
      shiftOut(datacont, clock2, LSBFIRST, x+12);   
   if(x>=10&&x<20)
    shiftOut(datacont, clock2, LSBFIRST, x+6);
   if(x>=0&&x<10)
     shiftOut(datacont, clock2, LSBFIRST, x); 
      if(y>=50&&y<60)
     shiftOut(datacont, clock2, LSBFIRST, y+30);
    if(y>=40&&y<50)
      shiftOut(datacont, clock2, LSBFIRST, y+24);
    if(y>=30&&y<40)
      shiftOut(datacont, clock2, LSBFIRST, y+18);
    if(y>=20&&y<30)
      shiftOut(datacont, clock2, LSBFIRST, y+12);   
   if(y>=10&&y<20)
    shiftOut(datacont, clock2, LSBFIRST, y+6);
   if(y>=0&&y<10)
     shiftOut(datacont, clock2, LSBFIRST, y); 
      if(z>=50&&z<60)
     shiftOut(datacont, clock2, LSBFIRST, z+30);
    if(z>=40&&z<50)
      shiftOut(datacont, clock2, LSBFIRST, z+24);
    if(z>=30&&z<40)
      shiftOut(datacont, clock2, LSBFIRST, z+18);
    if(z>=20&&z<30)
      shiftOut(datacont, clock2, LSBFIRST, z+12);   
   if(z>=10&&z<20)
    shiftOut(datacont, clock2, LSBFIRST, z+6);
   if(z>=0&&z<10)
     shiftOut(datacont, clock2, LSBFIRST, z); 
     delay(90.9);
      digitalWrite(latch2, HIGH);}
  }} 
   digitalWrite(latch3, LOW);
      int flag= m*100+s;
      //Recreo de 8:20 a 8:30
      if(flag>=1000&&flag<1115)
      shiftOut(databorde, clock3, LSBFIRST, B00000001);
      if(flag>=1115&&flag<1230)
      shiftOut(databorde, clock3, LSBFIRST, B00000011);
      if(flag>=1230&&flag<1345)
      shiftOut(databorde, clock3, LSBFIRST, B00000111);
      if(flag>=1345&&flag<1500)
      shiftOut(databorde, clock3, LSBFIRST, B00001111);
      if(flag>=1500&&flag<1615)
      shiftOut(databorde, clock3, LSBFIRST, B00011111);
      if(flag>=1615&&flag<1730)
      shiftOut(databorde, clock3, LSBFIRST, B00111111);
      if(flag>=1730&&flag<1845)
      shiftOut(databorde, clock3, LSBFIRST, B01111111);
      if(flag>=1845&&flag<=2000)
      shiftOut(databorde, clock3, LSBFIRST, B11111111);
         digitalWrite(latch3, HIGH);
         Serial.println(flag);  
      //Recreo de 9:00 a 9:10
      digitalWrite(latch3, LOW);
      if(flag>=0&&flag<115)
      shiftOut(databorde, clock3, LSBFIRST, B00000001);
      if(flag>=115&&flag<230)
      shiftOut(databorde, clock3, LSBFIRST, B00000011);
      if(flag>=230&&flag<345)
      shiftOut(databorde, clock3, LSBFIRST, B00000111);
      if(flag>=345&&flag<5)
      shiftOut(databorde, clock3, LSBFIRST, B00001111);
      if(flag>=5&&flag<615)
      shiftOut(databorde, clock3, LSBFIRST, B00011111);
      if(flag>=615&&flag<730)
      shiftOut(databorde, clock3, LSBFIRST, B00111111);
      if(flag>=730&&flag<845)
      shiftOut(databorde, clock3, LSBFIRST, B01111111);
      if(flag>=845&&flag<=10)
      shiftOut(databorde, clock3, LSBFIRST, B11111111);
         digitalWrite(latch3, HIGH);
       //Recreo de 10:30 a 10:40  
      digitalWrite(latch3, LOW);
      if(flag>=30&&flag<3115)
      shiftOut(databorde, clock3, LSBFIRST, B00000001);
      if(flag>=3115&&flag<3230)
      shiftOut(databorde, clock3, LSBFIRST, B00000011);
      if(flag>=3230&&flag<3345)
      shiftOut(databorde, clock3, LSBFIRST, B00000111);
      if(flag>=33450&&flag<35)
      shiftOut(databorde, clock3, LSBFIRST, B00001111);
      if(flag>=35&&flag<3615)
      shiftOut(databorde, clock3, LSBFIRST, B00011111);
      if(flag>=3615&&flag<3730)
      shiftOut(databorde, clock3, LSBFIRST, B00111111);
      if(flag>=3730&&flag<3845)
      shiftOut(databorde, clock3, LSBFIRST, B01111111);
      if(flag>=3845&&flag<=40)
      shiftOut(databorde, clock3, LSBFIRST, B11111111);
         digitalWrite(latch3, HIGH);
      //Recreo de 12:00 a 12:10
       digitalWrite(latch3, LOW);
      if(flag>=0&&flag<115)
      shiftOut(databorde, clock3, LSBFIRST, B00000001);
      if(flag>=115&&flag<230)
      shiftOut(databorde, clock3, LSBFIRST, B00000011);
      if(flag>=230&&flag<345)
      shiftOut(databorde, clock3, LSBFIRST, B00000111);
      if(flag>=345&&flag<5)
      shiftOut(databorde, clock3, LSBFIRST, B00001111);
      if(flag>=5&&flag<615)
      shiftOut(databorde, clock3, LSBFIRST, B00011111);
      if(flag>=615&&flag<730)
      shiftOut(databorde, clock3, LSBFIRST, B00111111);
      if(flag>=730&&flag<845)
      shiftOut(databorde, clock3, LSBFIRST, B01111111);
      if(flag>=845&&flag<=10)
      shiftOut(databorde, clock3, LSBFIRST, B11111111);
         digitalWrite(latch3, HIGH);
      //Recreo de 13:30 a 13:40
      digitalWrite(latch3, LOW);
      if(flag>=30&&flag<3115)
      shiftOut(databorde, clock3, LSBFIRST, B00000001);
      if(flag>=3115&&flag<3230)
      shiftOut(databorde, clock3, LSBFIRST, B00000011);
      if(flag>=3230&&flag<3345)
      shiftOut(databorde, clock3, LSBFIRST, B00000111);
      if(flag>=3345&&flag<35)
      shiftOut(databorde, clock3, LSBFIRST, B00001111);
      if(flag>=35&&flag<3615)
      shiftOut(databorde, clock3, LSBFIRST, B00011111);
      if(flag>=3615&&flag<3730)
      shiftOut(databorde, clock3, LSBFIRST, B00111111);
      if(flag>=3730&&flag<3845)
      shiftOut(databorde, clock3, LSBFIRST, B01111111);
      if(flag>=3845&&flag<=40)
      shiftOut(databorde, clock3, LSBFIRST, B11111111);
         digitalWrite(latch3, HIGH); 
      //Barrita o Puntos
      //digitalWrite(latch4, LOW);
     // shiftOut(databarra,clock4, LSBFIRST, B0  
      
  }

void setup () 
{
  pinMode(databorde, OUTPUT);
  pinMode(datapuntos, OUTPUT);
  pinMode(clock4, OUTPUT);
  pinMode(latch4, OUTPUT);
  pinMode(clock3, OUTPUT);
  pinMode(latch3, OUTPUT);
  pinMode(datacont, OUTPUT);
  pinMode(latch2, OUTPUT);
  pinMode(clock2, OUTPUT);
  RTC.begin(); // Inicia la comunicación con el RTC
  RTC.adjust(DateTime(__DATE__, __TIME__));
   Wire.begin(); // Inicia el puerto I2C
Serial.begin(9600); // Establece la velocidad de datos del puerto serie
}


void loop() {
  DateTime now = RTC.now(); // Obtiene la fecha y hora del RTC
   s = now.second();
   h = now.hour();
   m = now.minute();   
   d = now.day();
   me = now.month(); 
   a = now.year();
   g= a-2000;

    //Muestra la hora  
      digitalWrite(latch2, LOW);
      if(h>=0&&h<10)          
      shiftOut(datacont, clock2, LSBFIRST, h);
      if(h>=10&&h<20)
      shiftOut(datacont, clock2, LSBFIRST, h+6);
      if(h>=20&&h<30)
      shiftOut(datacont, clock2, LSBFIRST, h+12);
      if(m>=0&&m<10)
      shiftOut(datacont, clock2, LSBFIRST, m);
      if(m>=10&&m<20)
      shiftOut(datacont, clock2, LSBFIRST, m+6);
      if(m>=20&&m<30)
      shiftOut(datacont, clock2, LSBFIRST, m+12);
      if(m>=30&&m<40)
      shiftOut(datacont, clock2, LSBFIRST, m+18);
      if(m>=40&&m<50)
      shiftOut(datacont, clock2, LSBFIRST, m+24);
      if(m>=50&&m<60)
      shiftOut(datacont, clock2, LSBFIRST, m+30);
      if(s>=0&&s<10)
      shiftOut(datacont, clock2, LSBFIRST, s);
      if(s>=10&&s<20)
      shiftOut(datacont, clock2, LSBFIRST, s+6);
      if(s>=20&&s<30)
      shiftOut(datacont, clock2, LSBFIRST, s+12);
      if(s>=30&&s<40)
      shiftOut(datacont, clock2, LSBFIRST, s+18);
      if(s>=40&&s<50)
      shiftOut(datacont, clock2, LSBFIRST, s+24);
      if(s>=50&&s<60)
      shiftOut(datacont, clock2, LSBFIRST, s+30);
      digitalWrite(latch2, HIGH);
   
   //Contador del borde
   if((h>=8&&m>=20&&m<30) || (h==9&&m>=0&&m<10) || (h==13&&m>=30&&m<=40) || (h==10&&m>=30&&m<40) || (h==12&&m>=0&&m<=10) )
    { recreo();
    }     
}


