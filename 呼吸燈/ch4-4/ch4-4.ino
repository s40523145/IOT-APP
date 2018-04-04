//led呼吸燈
int led = 10;
void setup() {
}

void loop() {
  int value;
  for(value = 0 ; value <=255; value+=5) {
    analogWrite(led, value);
    delay(100);
  }
  for(value = 0 ; value <=255; value-=5) {
    analogWrite(led, value);
    delay(100);
  }
}
