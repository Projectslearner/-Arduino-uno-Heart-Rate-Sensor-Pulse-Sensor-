# Heart Rate Monitoring with Arduino

#### Project Overview

This project demonstrates how to use an Arduino Uno to monitor heart rate using a heart rate sensor module. The heart rate sensor detects the heart rate of a person and displays it on the Serial Monitor. Additionally, an LED blinks to indicate a normal heart rate range.

#### Components Needed

1. **Arduino Uno**
2. **Heart Rate Sensor Module**
3. **LED**
4. **Resistor (220 ohms)**
5. **Jumper Wires**

### Block Diagram



#### Instructions

1. **Circuit Setup:**
   - Connect the analog output pin of the heart rate sensor to analog pin A0 on the Arduino Uno.
   - Connect the LED's positive (+) terminal to digital pin 13 on the Arduino Uno through a current-limiting resistor (220 ohms).
   - Connect the LED's negative (-) terminal to the ground (GND) pin on the Arduino Uno.

2. **Initialization:**
   - Initialize serial communication at a baud rate of 9600 in the `setup()` function.
   - Set the LED pin as an output using the `pinMode()` function.

3. **Read Heart Rate:**
   - Read the analog sensor value using the `analogRead()` function.
   - Map the sensor value to the heart rate range (usually between 60 and 100 beats per minute) using the `map()` function.

4. **Display Heart Rate:**
   - Print the heart rate value to the Serial Monitor using the `Serial.println()` function.

5. **LED Blinking:**
   - Based on the heart rate value, blink the LED to indicate a normal heart rate.
   - If the heart rate is between 60 and 100 beats per minute, turn on the LED for a short duration and then turn it off.
   - Adjust the blink timing to suit your preference.

6. **Adjustments:**
   - Fine-tune the heart rate range and LED blinking pattern according to your requirements.
   - Experiment with different delay times to adjust the LED blinking speed and sensor reading frequency.

#### Applications

- **Health Monitoring:** Monitor heart rate during exercise or daily activities.
- **Fitness Devices:** Integrate heart rate monitoring into fitness trackers or wearable devices.
- **Medical Devices:** Incorporate heart rate monitoring into medical devices for patient monitoring.

#### Notes

- Ensure the heart rate sensor is securely attached to the body for accurate readings.
- Calibrate the heart rate sensor and adjust the code as needed to match your specific sensor's characteristics.

---

🌐 [projectslearner.com](https://projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner