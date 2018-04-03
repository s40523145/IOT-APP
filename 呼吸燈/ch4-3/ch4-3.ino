int n=0;
void setup ()
{
  pinMode(7,INPUT);
  pinMode(3,OUTPUT);      //该端口需要选择有#号标识的数字口
  pinMode(8,INPUT);

}

void loop(){
  int up = digitalRead(7);          //读取4号口的状态
  int down = digitalRead(8);      //读取10号口的状态   
  if (up==HIGH) {                   //判断4号口目前是否是高电平 
   n=n+5;                         //每次累加值为5
    if (n>=255) {
      n=255;
    }            //限定最大值为255
    
  analogWrite(6,n);               //使用PWM控制6号口输出，变量n的取值范围是0-255 
  delay (300);
  }
  if (down==HIGH) {                   //减少亮度
   n=n-5;
    if (n<=0) {
      n=0;
    } 
  analogWrite(6,n);
  delay (300);
  }
}


