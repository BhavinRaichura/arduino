int r1 = 2;
int r2 = 3;
int r3 = 4;
int r4 = 5;

int ir1 = 13;
int ir2 = 12;
int ir3 = 11;
int ir4 = 10;

int a=0;
int b=0;
int c= 0;
int d=0;
int x,y;



void setup() {
  // put your setup code here, to run once:

  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);

  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(r4, OUTPUT);

  

}

void loop() {
  // put your main code here, to run repeatedly:

  

}

void play (a, b,x,y){

  if (digitalRead(a) == HIGH){
    c = c+1;
    if(c <=1){

      if (digitalRead(b)== HIGH){
        d=d+1;
        if (d<=1){
          digitalWrite(x,HIGH);
          digitalWrite(y,HIGH);
        }
        else {
          d=d-1;
          c=c-1;
          digitalWrite(x,LOW);
          digitalWrite(y,LOW);
          
        }
      }
      else{
        c=c-1;
      }
    }
    
    
  }
}
