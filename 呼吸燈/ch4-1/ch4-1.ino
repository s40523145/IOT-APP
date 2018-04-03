//项目四 – 呼吸灯
int ledPin = 10;//輸入pin角為10

void setup() {
      pinMode(ledPin,OUTPUT);//設輸出pin角
      Serial.begin(9600);//serial輸出速度
}

void loop(){
      fadeOn(1000,5);//啟動led函數(1000, 5)執行時間
      fadeOff(1000,5);//關閉led函數(1000, 5)執行時間
}

void fadeOn(unsigned int time,int increament){
  //int time 指的是时间 int increament 指的是增量
	for (byte value = 0 ; value < 255; value+=increament){ 
	        Serial.println(value);
		analogWrite(ledPin, value);
		delay(time/(255/5));
        } 
}

void fadeOff(unsigned int time,int decreament){
	for (byte value = 255; value >0; value-=decreament){ 
	        Serial.println(value);
		analogWrite(ledPin, value); 
		delay(time/(255/5)); 
	}
}
