#define led1 12
#define led2 13

void setup() {
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
}

void loop() {
  for(int i=1; i<=3; i++){
  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led1,LOW);
  delay(1000);}
  for(int i=1; i<=3; i++){
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(1000);}
}
