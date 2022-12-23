const int trackingPin = 7;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); //declare on-board LED as output
  pinMode(trackingPin, INPUT); //declare tracking pin as input
}

void loop() {
//Led should be on while its on the black surface and off when it isnt
//Signal is High if on black surface
boolean val = digitalRead(trackingPin); //read value of tracking pin
  if(val==HIGH) //if on the black surface
    {
      digitalWrite(LED_BUILTIN, HIGH); //Led is on
    }
  else
    {
      digitalWrite(LED_BUILTIN, LOW); //Led is off
    }
}
