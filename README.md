# 🌙 Illumino – Auto Light Control using Arduino & LDR

Illumino is a simple yet powerful Arduino-based system that automatically turns on an LED when it's dark. It's perfect for beginners learning about analog sensors, voltage dividers, and automation using light levels.

> **Made by**: DARSHAN-SAI-M  
> [🔗 Tinkercad Circuit](https://www.tinkercad.com/things/eomFzwhf3Tp-illumino)

---

## 🔧 What It Does

- Detects ambient light using an LDR (Light Dependent Resistor)
- Turns on an LED when light levels fall below a threshold
- Prints voltage values to Serial Monitor for debugging or tuning

---

## 🧰 Components Used

| Component       | Quantity |
|----------------|----------|
| Arduino Uno     | 1        |
| LDR Sensor      | 1        |
| 10kΩ Resistor   | 1        |
| LED             | 1        |
| 220Ω Resistor   | 1        |
| Breadboard      | 1        |
| Jumper Wires    | Several  |

---

## ⚙️ Circuit Diagram

> View the full interactive simulation on [Tinkercad](https://www.tinkercad.com/things/eomFzwhf3Tp-illumino)

- LDR + 10kΩ forms a voltage divider connected to analog pin **A1**
- LED connected to digital pin **8** via 220Ω resistor
- 5V and GND to power components

---

## 🧠 Code Overview

```cpp
float x;  // Global variable for voltage

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(A1, INPUT);
}

void loop() {
  x = (analogRead(A1) / 1023.0) * 5.0;
  Serial.println(x);

  if (x < 0.5) {
    digitalWrite(8, HIGH);  // Turn on LED
  } else {
    digitalWrite(8, LOW);   // Turn off LED
  }
}
