int LM1 = 3;      // left sensor
int LM2 = 5;      // right sensor
int GM1 = 6;       // left motor
int GM2 = 9;       // left motor
int BM1 = 10;       // right motor
int BM2 = 11;      // right motor
int i=0;
void setup()
{
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(GM1, OUTPUT);
  pinMode(GM2, OUTPUT);
  pinMode(BM1, OUTPUT);
  pinMode(BM2, OUTPUT);

}
void loop()
{ analogWrite(GM1,120);     //close Grip
  analogWrite(GM2,LOW);
  delay(1500);
   analogWrite(LM1,180);     //upward object
   analogWrite(LM2,LOW);     
   delay(3000);
   analogWrite(LM1,LOW);     //downward object
   analogWrite(LM2,20); 
   delay(100);
   analogWrite(GM1,LOW);     //hold object
   analogWrite(GM2,LOW);    
   delay(100);
  analogWrite(GM1,LOW);     //open Grip
  analogWrite(GM2 ,100);
 delay(1500);
   analogWrite(GM1,LOW);
   analogWrite(GM2,LOW);
 }
