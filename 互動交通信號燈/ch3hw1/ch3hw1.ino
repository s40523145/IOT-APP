//第一種方式
int led2 = 2 ;
int led3 = 3 ;
int led4 = 4 ;
int led5 = 5 ;
int led6 = 6 ;
int led7 = 7 ;
void setup() {
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);

}

void loop() {
  digitalWrite(led2, HIGH);
  delay(400);
  digitalWrite(led3, HIGH);
  delay(400);
  digitalWrite(led4, HIGH);
  delay(400);
  digitalWrite(led5, HIGH);
  delay(400);
  digitalWrite(led6, HIGH);
  delay(400);
  digitalWrite(led7, HIGH);
  delay(1000);
  digitalWrite(led7, LOW);
  delay(400);
  digitalWrite(led6, LOW);
  delay(400);
  digitalWrite(led5, LOW);
  delay(400);
  digitalWrite(led4, LOW);
  delay(400);
  digitalWrite(led3, LOW);
  delay(400);
  digitalWrite(led2, LOW);
  delay(1000);

}
