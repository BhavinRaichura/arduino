 int pir =4;
int buzzer = 13;

void setup() {
  // put your setup code here, to run once:

 
  
  pinMode(pir,INPUT);
  pinMode(buzzer,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int val = digitalRead(pir);
  if(val == HIGH){
    digitalWrite (buzzer,HIGH);
    
  }

  else{
    digitalWrite (buzzer,LOW);
   
  }

}
