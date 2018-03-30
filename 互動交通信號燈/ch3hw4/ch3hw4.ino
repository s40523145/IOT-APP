int LED = 7;
int BUTTON = 8;

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop(){
  if(digitalRead(BUTTON) == HIGH){
    digitalWrite(LED, HIGH);
  }else{
  digitalWrite(LED, LOW);
}
}
