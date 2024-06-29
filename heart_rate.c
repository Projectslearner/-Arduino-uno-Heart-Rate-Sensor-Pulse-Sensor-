/*
    Project name : Arduino Uno Heart Rate Sensor
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-heart-rate-sensor
*/

// Define the pin connected to the heart rate sensor
const int heartRateSensorPin = A0;

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the value from the heart rate sensor
  int sensorValue = analogRead(heartRateSensorPin);
  
  // Check if the sensor value is above a certain threshold (indicating a pulse)
  if (sensorValue > 512) { // Adjust threshold based on your sensor
    Serial.println("Pulse detected");
  } else {
    Serial.println("No pulse detected");
  }

  delay(100); // Delay to avoid multiple counts per pulse
}
