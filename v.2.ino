
int p1=2;
int p2=3;
int p3=4;
int a,b;
int dir=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(11, OUTPUT);
   pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
//  
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=digitalRead(p1);
  int b=digitalRead(p2);
  int c=digitalRead(p3);
  //Serial.println(a);
  if(a==1 && dir==0)
  {
    dir=1;
  }
  else if(b==1 && dir==0)
  {
    dir=2;
  }
  else if(c==1 && dir==0)
  {
   dir=3;
  }
  else
  {
    dir=0;
  }
  
  if(dir!=0)
  {
    if(dir==1){
      digitalWrite(11,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(13,LOW);
      delay(1000);
    }
    else if (dir==2)
    {
      digitalWrite(12,LOW);
      digitalWrite(13,HIGH);
      digitalWrite(11,LOW);
      delay(1000);
    }
    else if (dir==3)
    {
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(13,LOW);
      delay(1000);
    }
  }
   
  else
  {
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH); 
    digitalWrite(11,HIGH);    
  }

}
