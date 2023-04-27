// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A0));
  if (analogRead(A0) < 160) {
    digitalWrite(2, HIGH);
  }
  if (analogRead(A0) >= 160) {
    digitalWrite(2, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}