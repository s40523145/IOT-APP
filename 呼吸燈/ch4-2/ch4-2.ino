//项目四 –小火山
int led3 = 3;
int led5 = 5;
int led6 = 6;
void setup() {
      pinMode(led3,OUTPUT);
      pinMode(led5,OUTPUT);
      pinMode(led6,OUTPUT);
      Serial.begin(9600);
}
void loop() {
      led3 = random(255);
      analogWrite(led3, random()); 
      Serial.println(led3);
      
      led5 = random(255);
      analogWrite(led5, random());
      Serial.println(led5);
      
      led6 = random(255);
      analogWrite(led6, random());
      Serial.println(led6);
      

      
}


