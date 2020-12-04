#include <Wire.h>
#include "RTClib.h"
RTC_DS1307 RTC;
int h=0, m = 0, s = 0,d=0,me=0,a=0,ti=0,te=0,g=0;
int datacont=11;
int latch2=12;
int clock2=13;
void setup() {
pinMode(datacont, OUTPUT);
  pinMode(latch2, OUTPUT);
  pinMode(clock2, OUTPUT);
  RTC.begin(); // Inicia la comunicación con el RTC
  RTC.adjust(DateTime(__DATE__, __TIME__));
   Wire.begin(); // Inicia el puerto I2C
Serial.begin(9600);
}

void loop() {
  DateTime now = RTC.now(); // Obtiene la fecha y hora del RTC
   s = now.second();
   h = now.hour();
   m = now.minute();
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
}
