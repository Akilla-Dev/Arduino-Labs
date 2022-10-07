
int timer = 50;
int analogCONTROLLER;


void setup()
{
  for(int thisPin = 1; thisPin < 5; thisPin++){
  	pinMode(thisPin,OUTPUT);
  }
}

void loop()
{
  
  for (int thisPin = 1; thisPin<5;thisPin++){
    analogCONTROLLER= analogRead(A0);
  analogWrite(thisPin,map(analogCONTROLLER,0,1023,0,255));
  //igitalWrite(thisPin,HIGH);
    delay(timer);
    
    //gitalWrite(thisPin,LOW);	
  }
  for (int thisPin = 6; thisPin>=1;thisPin--){
     analogCONTROLLER= analogRead(A0);
  analogWrite(thisPin,map(analogCONTROLLER,0,1023,0,255));
 //digitalWrite(thisPin,HIGH);
    delay(timer);
    
  //digitalWrite(thisPin,LOW);	
  }
}