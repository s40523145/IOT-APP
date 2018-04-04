int ledPinR = 9;    // LED connected to digital pin 9 red
int ledPinG = 10;    // LED connected to digital pin 10 green
int ledPinB = 11;    // LED connected to digital pin 11 blue

void setup()  { 

} 

void loop()  { 
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(ledPinR, fadeValue);         
    delay(30);                            
  } 


  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(ledPinG, fadeValue);         
    delay(30);                            
  } 


  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    analogWrite(ledPinB, fadeValue);         
    delay(30);                            
  } 


  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    analogWrite(ledPinG, fadeValue);         
    delay(30);                            
  } 


  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    analogWrite(ledPinR, fadeValue);         
    delay(30);                            
  } 


  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    analogWrite(ledPinB, fadeValue);         
    delay(30);                            
  } 



}
