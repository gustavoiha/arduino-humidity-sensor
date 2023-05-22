int dryAnalogRead = 1024;
int wetAnalogRead = 500;

int humidityLevel() {
  int sensorValue = analogRead(A0);

  int humidityLevel = map(sensorValue, dryAnalogRead, wetAnalogRead, 0, 100);
  return max(0, min(humidityLevel, 100));
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(humidityLevel());

  delay(200);
}
