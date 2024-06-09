/*
    Project name : Heart Rate Sensor
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-heart-rate-sensor
*/

#define SENSOR_PIN A0 // Analog pin connected to the sensor
#define LED_PIN 13   // Digital pin connected to the LED

void setup() {
  Serial.begin(9600);   // Initialize serial communication
  pinMode(LED_PIN, OUTPUT); // Set LED pin as output
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN); // Read analog sensor value
  int heartRate = map(sensorValue, 0, 1023, 0, 100); // Map sensor value to heart rate range
  
  Serial.print("Heart Rate: ");
  Serial.println(heartRate); // Print heart rate value to Serial Monitor
  
  // Blink LED based on heart rate value
  if (heartRate > 60 && heartRate < 100) {
    digitalWrite(LED_PIN, HIGH); // Turn on LED
    delay(100); // Delay for LED blink
    digitalWrite(LED_PIN, LOW);  // Turn off LED
    delay(100); // Delay for LED blink
  }
  
  delay(1000); // Delay before reading sensor again
}
