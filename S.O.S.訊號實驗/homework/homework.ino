int redpin = 8;
int yallowpin = 9;
int greenpin = 10;
void setup() {
        pinMode(redpin, OUTPUT);
        pinMode(yallowpin, OUTPUT);
        pinMode(greenpin, OUTPUT);
}
void loop() {
             
        digitalWrite(redpin,HIGH);
        delay(7000);
        digitalWrite(yallowpin,HIGH);
        delay(2000);
        digitalWrite(redpin,LOW);
        delay(0);
        digitalWrite(yallowpin,LOW);
        delay(0);
        digitalWrite(greenpin,HIGH);
        delay(5000);
        digitalWrite(greenpin,LOW);
        delay(0);
        digitalWrite(yallowpin,HIGH);
        delay(2000);
        digitalWrite(yallowpin,LOW);
        delay(0);
        delay(500);     
}

