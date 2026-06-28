Arduino Collision Sensor - LED Flash Alert

A simple Arduino project demonstrating how to use a digital collision sensor module to detect an impact and flash an LED five times. This beginner-friendly example is perfect for learning digital inputs, sensor detection, and event-based programming with Arduino.

✨ Features

* Detects collisions using a digital collision sensor
* Flashes an LED 5 times after a collision
* Uses an active LOW sensor
* No external libraries required
* Beginner-friendly Arduino example

---

📦 Hardware Required

| Component                       | Quantity |
| ------------------------------- | -------: |
| Arduino UNO                     |        1 |
| Digital Collision Sensor Module |        1 |
| USB Cable                       |        1 |
| Jumper Wires                    |        5 |

---
 🔌 Wiring

 Collision Sensor Module

| Module Pin | Arduino Pin |
| ---------- | ----------- |
| S (Signal) | Digital 3   |
| + (VCC)    | 5V          |
| – (GND)    | GND         |

 LED

| LED          | Arduino Pin |
| ------------ | ----------- |
| Built-in LED | Digital 13  |

> This example uses the Arduino UNO's built-in LED on **Pin 13**, so no external LED is required.



 ⚡ Demo

🥊 Collision detected.

💡 The built-in LED flashes **5 times**.

⏳ Waits for 500 ms before monitoring for the next collision.

🔁 Repeats continuously.

---

 ⚙️ How It Works

The collision sensor module is connected to **Digital Pin 3** and operates as an **active LOW** device.

* No collision → Output = HIGH
* Collision detected → Output = LOW

When the Arduino detects a LOW signal from the sensor, it enters a `for` loop that flashes the built-in LED five times. After completing the flash sequence, the sketch pauses briefly before continuing to monitor the sensor.

This simple example demonstrates how to respond to digital sensor events and can be expanded to trigger buzzers, relays, displays, alarms, or other devices.

---

📋 Specifications

| Property        | Value                       |
| --------------- | --------------------------- |
| Working Voltage | 3.3V – 5V                   |
| Interface       | Digital                     |
| Output Type     | Active LOW                  |
| Detection       | Mechanical Collision Switch |

---

📝 Notes

* No external libraries are required.
* Uses the Arduino UNO's built-in LED on **Digital Pin 13**.
* The collision sensor is **active LOW**, meaning it outputs LOW when triggered.
* The number of LED flashes can be changed by modifying the loop count:
* Adjust the flash speed by changing the `delay(150)` values.
* A great beginner project for learning digital sensors and event-driven programming with Arduino.

---

📄 License

This project is open source and available under the MIT License.

Feel free to modify, improve, and share it.
