int period = 1000;
int half;

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}

void loop() {
  
  if(Serial.available() > 0)
  {
      //TODO: get frequency
      int frequency = Serial.parseInt();

      period = (1 / frequency) * 1000;
  }

  half = period / 2;
  
  digitalWrite(8, HIGH);
  delay(half);
  digitalWrite(8, LOW);
  delay(half);
}
