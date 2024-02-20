void setup() {
for(int i=5;i<9;i++)
    pinMode(i,OUTPUT);
}
void forward() {
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
}
void backward(){
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
}
 void left(){
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  }
void right(){
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
}
void clockwise(){
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
}
void clockwise(){
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
}
void stopp()
{
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
}

void loop(){

//Square

forward();
delay(2500);
right();
delay(2000);

forward();
delay(2500);
right();
delay(2000);

forward();
delay(2500);
right();
delay(2000);

forward();
delay(2500);
right();
delay(2000);

stopp();
delay(10000);

//change the value of i to make a circle                                            


for(int i=0;i<5000;i++){
forward();
delay(100);
clockwise();
delay(10);
}
 int i=1;
 while(i=1)
 stopp();
}
