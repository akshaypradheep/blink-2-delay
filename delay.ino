const int led =13;
const int sw =2;
int dly;
void setup(){
  pinMode(led,OUTPUT);
  pinMode(sw,INPUT);
}
void loop(){
  if(digitalRead(sw)==HIGH){
    dly = 100;
  }
  else{
    dly = 1000;
  }
  digitalWrite(led,HIGH);
  delay(dly);
  digitalWrite(led,LOW);
  delay(dly);
}
