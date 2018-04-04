//项目五 – 炫彩RGB灯
int redPin = 3;
int greenPin = 5;
int bluePin = 6;

void setup(){
     pinMode(redPin, OUTPUT);
     pinMode(greenPin, OUTPUT);
     pinMode(bluePin, OUTPUT);

}
void loop(){
    colorRGB(255,0,0);
    delay(1000);
    colorRGB(255,255,0);
    delay(1000);
    colorRGB(0,255,0);
    delay(1000);
    colorRGB(0,255,255);
    delay(1000);
    colorRGB(0,0,255);
    delay(1000);
    colorRGB(255,255,255);
    delay(1000);
}

void colorRGB(int red, int green, int blue){
     analogWrite(redPin,constrain(red,0,255));
     analogWrite(greenPin,constrain(green,0,255));
     analogWrite(bluePin,constrain(blue,0,255));
}
