// C++ code
//
int distancia = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
}

void loop()
{
  Serial.println(0.01723 * readUltrasonicDistance(3, 4));
  distancia = 0.01723 * readUltrasonicDistance(3, 4);
  if (distancia < 329) {
    tone(6, 932, 700); // play tone 70 (A#5 = 932 Hz)
  } else {
    noTone(6);
  }
  delay(10); // Delay a little bit to improve simulation performance
}