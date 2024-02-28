int l, r;
const int tp =13;
const int ep = 12;
int distance, duration;
void setup(){
  Serial.begin(9600);

  

  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(tp,OUTPUT);
  pinMode(ep,INPUT);
  pinMode(A0,INPUT); 
  pinMode(A1,INPUT); 
 

}

void forward(){
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
void right(){
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  }
void left(){
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  }
void cw(){
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  }
void acw(){
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  }
  void stopp(){
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  }

  void follow(){
    int l,r;
    digitalWrite(tp, LOW); 
    delayMicroseconds(2); 
     
    digitalWrite(tp, HIGH); 
    delayMicroseconds(10); 
    digitalWrite(tp, LOW); 
     
    duration = pulseIn(ep, HIGH); 
    
    distance= duration*0.034/2;

    if (distance<=15 &&distance>=0){
      stopp();
    }
    else{
           
      l=digitalRead(A0); 
      r=digitalRead(A1);
      if (l==1 && r==1){
        forward();
      }
      else if (l==0 && r==1){
        left();
      }
      else if (l==1 && r==0){
        right();
      }
    }
  }
  
char temp;
void loop() {

 
    follow();


  }
