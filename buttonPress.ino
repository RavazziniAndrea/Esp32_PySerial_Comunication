void setup() {
  Serial.begin(115200);
  pinMode(25,INPUT);
}

void loop() {

  if(digitalRead(25) == HIGH)
  {
    Serial.println("Button pressed");
  }
  
  delay(1000);
}
