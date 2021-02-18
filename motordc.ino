#define motordc 5

void setup() {
 pinMode(motordc,OUTPUT);
}

void loop() {
  analogWrite(motordc,200); //LOW 0-225 HIGH
}
