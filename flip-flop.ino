int led1 = 12;
int led2 = 13;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);  //led 1 pada pin 12 nyala
  digitalWrite(led2, LOW);   //led 2 pada pin 12 mati
  delay(1000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(1000);
}
