// C++ code
//
int green = 2;
int yellow = 3;
int red = 4;

void setup()
{
  for(int i = 2; i<4; i++){
    pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);}
}

void loop()
{
 /* for(int i=2; i < 4; i++){
  digitalWrite(ledPin[i], HIGH);
  delay(1000);
  digitalWrite(ledPin[i], LOW);
    delay(1000); }*/
  digitalWrite(green, HIGH);
  delay(5000);
  digitalWrite(green, LOW);
   

  digitalWrite(yellow, HIGH);
  delay(3000);
  digitalWrite(yellow, LOW);
  
  
  
  digitalWrite(red, HIGH);
  delay(7000);
  digitalWrite(red, LOW);
  
  
}
