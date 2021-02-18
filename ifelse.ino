#include <NewPing.h>
NewPing sonar(7,6, 100);
#define pingSpeed 1000
#define buzzer 4
unsigned int waktu;
int jeda;

void setup(){
  pinMode(buzzer,OUTPUT);
}

void loop(){
  jarak=sonar.ping();
  waktu=sonar.ping();
  jeda=waktu/US_ROUNDTRIP_CM;
  jeda=waktu*5;
  if(jarak<=50)
  {digitalWrite(buzzer,HIGH);
  delay(jeda);
  digitalWrite(buzzer,LOW);
  delay(jeda);}
  else
  {digitalWrite(buzzer,LOW);}
}
