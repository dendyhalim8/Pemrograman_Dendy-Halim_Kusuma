#include <Servo.h>
Servo servo;
#define posisi1 0
#define posisi2 180

void setup(){
  servo.attach(6);
  servo.write(90);
  delay(2000);
}

void loop(){
  servo.write(posisi1);
  delay(1000);
  servo.write(posisi2);
  delay(1000);
}
