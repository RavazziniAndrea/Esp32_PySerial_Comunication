
byte lastScritto = 0;

void setup() {
  Serial.begin(115200);
  pinMode(25,INPUT);
  pinMode(26,INPUT);
  pinMode(27,INPUT);
}

void loop() {

  if(lastScritto != 1 && digitalRead(25) == HIGH)
  {
    lastScritto = 1;
    Serial.println("1");
  }  
  if(lastScritto != 2 && digitalRead(26) == HIGH)
  {
    lastScritto = 2;
    Serial.println("2");
  }  
  if(lastScritto != 3 && digitalRead(27) == HIGH)
  {
    lastScritto = 3;
    Serial.println("3");
  }
  
  delay(10);
}
