int trig1 = 7;
int echo1= 6;
int trig2 = 5;
int echo2 = 4;
long time = 0;
long  dist1 = 0;
int dist2=0;
int a= 12;
int b =11;
int c = 10;
int d = 9;
int buz = 13;
int ir=8;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig1, OUTPUT);
  pinMode(echo1, INPUT);
  pinMode(trig2, OUTPUT);
  pinMode(echo2, INPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(buz, OUTPUT);
  pinMode(ir, INPUT);

} 
void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(ir)==LOW){
    on(trig1, echo1);
    off(trig2, echo2);
  }
  else if(digitalRead(ir)==HIGH){
    digitalWrite(a,HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    
  }

  
  
}


void on(int x, int y){
  digitalWrite(x, LOW);
  delay(5);
  digitalWrite(x,HIGH);
  delay(10);
  digitalWrite(x,LOW);
  time = pulseIn(y, HIGH);
  dist1 = (time/2)/29.1;
  if(dist1 == 20){
    digitalWrite(a, HIGH); 
    digitalWrite(buz,HIGH);
    delay(5);
    digitalWrite(buz,LOW);
    
  }
  else if(dist1==10){
    digitalWrite(b,HIGH);
    digitalWrite(buz,HIGH);
    delay(5);
    digitalWrite(buz,LOW);
    }
  else if(dist1==30){
    digitalWrite(c,HIGH);
    digitalWrite(buz,HIGH);
    delay(5);
    digitalWrite(buz,LOW);
    }
  else if(dist1==40){
    digitalWrite(d,HIGH);
    digitalWrite(buz,HIGH);
    delay(5);
    digitalWrite(buz,LOW);
    }
}


void off(int i, int j){
  time= 0;
  digitalWrite(i, LOW);
  delay(5);
  digitalWrite(i,HIGH);
  delay(10);
  digitalWrite(i,LOW);
  time = pulseIn(j, HIGH);
  dist2 = (time/2)/29.1;
  if(dist2 == 10){
    digitalWrite(a, LOW); 
    digitalWrite(buz,HIGH);
    delay(5);
    digitalWrite(buz,LOW);
  }
  else if(dist2==20){
    digitalWrite(b,LOW);
    digitalWrite(buz,HIGH);
    delay(5);
    digitalWrite(buz,LOW);
    }
  else if(dist2==30){
    digitalWrite(c,LOW);
    digitalWrite(buz,HIGH);
    delay(5);
    digitalWrite(buz,LOW);
    }
  else if(dist1==40){
    digitalWrite(d,LOW);
    digitalWrite(buz,HIGH);
    delay(5);
    digitalWrite(buz,LOW);
    }
}
