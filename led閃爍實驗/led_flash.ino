//项目一 —— LED 闪烁
/*
   描述：LED每隔一秒交替亮灭一次
*/  
int ledPin = 10; 
// int 變量刑 ledpin 變量名 10 為控制器的數位腳10
// 变量名必须以一个字母开头
void setup() {
        pinMode(ledPin, OUTPUT);
}
//void setup()函數就像執行任務前的預先準備設定
//pinMode(引腳號, 模式)
void loop() {
        digitalWrite(ledPin,HIGH);
        delay(1000);
        digitalWrite(ledPin,LOW);
        delay(1000);
}
//void loop() 此函式為主要執行程序，當控制片接上電源時此函式就會無限的循環如同while迴圈
//digitalWrite(ledPin, HIGH) 數位腳為函式編寫，控制腳位的輸出輸入
//deley(1000)暫停1秒
