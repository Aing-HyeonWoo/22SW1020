// C++ code
//
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
}


// 
void loop()
{
  Serial.println("1 : ");
  Serial.println(0.01723 * readUltrasonicDistance(3, 2));
  Serial.println("2 : ");
  Serial.println(0.01723 * readUltrasonicDistance(5, 4));
  Serial.println("3 : ");
  Serial.println(0.01723 * readUltrasonicDistance(6, 7));
  delay(300); // Wait for 300 millisecond(s)
}
