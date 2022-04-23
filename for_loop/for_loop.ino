int a;
void setup() {
  pinMode(a, OUTPUT);
  Serial.begin(9640);
  // put your setup code here, to run once:

}

void loop() {

  for (a=13;a>8;a=a-1){
    digitalWrite(a,HIGH);
    delay(10000);
    digitalWrite(a,LOW);
    delay(5000);
  }
  // put your main code here, to run repeatedly:

}
