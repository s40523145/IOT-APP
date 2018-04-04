//项目六 报警器
float sinVal;
int toneVal;
int button = 7;

void setup() {
     pinMode(8, OUTPUT);
     pinMode(7, INPUT);
}

void loop() {
if(digitalRead(button) == HIGH){
      for(int x=0; x<180; x++) {
            //将 sin 函数角度转化为弧度 
            sinVal = (sin(x*(3.1412/180)));
            //用 sin 函数值产生声音的频率
            toneVal = 2000+(int(sinVal*1000));
            //给引脚 8 一个 
            tone(8, toneVal);
      }
}else {
noTone(8);
}

 }   

