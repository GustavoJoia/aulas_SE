// C++ code
//
int aceso = 0;

void setup()
{
  pinMode(5, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, INPUT);
  pinMode(8, INPUT);

  aceso = 0;
}

void loop()
{
  if (digitalRead(5) == HIGH) {
    digitalWrite(7, HIGH);
    aceso = 1;
  }
  if (digitalRead(6) == HIGH) {
    digitalWrite(7, LOW);
    aceso = 0;
  }
  if (digitalRead(8) == HIGH) {
    if (aceso == 0) {
      digitalWrite(7, HIGH);
      aceso = 1;
    } else {
      if (aceso == 1) {
        digitalWrite(7, LOW);
        aceso = 0;
      }
    }
    delay(200); // Wait for 200 millisecond(s)
  }
}