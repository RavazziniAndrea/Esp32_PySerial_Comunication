byte last = 0;

void setup() {
  Serial.begin(115200);
  pinMode(25,INPUT);
  pinMode(26,INPUT);
  pinMode(27,INPUT);
}

void loop() {
  if(last != 1 && digitalRead(25) == HIGH){
    last = 1;
    Serial.println("1");
  }  
  if(last != 2 && digitalRead(26) == HIGH){
    last = 2;
    Serial.println("2");
  }  
  if(last != 3 && digitalRead(27) == HIGH){
    last = 3;
    Serial.println("3");
  } 
  
  if(allLow()){
    last = 0;
  }
}

boolean allLow(){
  return digitalRead(25) == LOW && 
         digitalRead(26) == LOW && 
         digitalRead(27) == LOW;
}
