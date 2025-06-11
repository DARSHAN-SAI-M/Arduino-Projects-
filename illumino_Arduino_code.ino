/*
- LED: Connected to Digital Pin 8 through a 220Ω resistor.
- LDR & 10kΩ form a voltage divider feeding Analog Pin A1.

---

## 💾 Arduino Code

```cpp
*/
float x;

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(A1, INPUT);
}

void loop() {
  x = (analogRead(A1) / 1023.0) * 5.0;  // Convert analog reading to voltage
  Serial.println(x);  // Print voltage to Serial Monitor

  if (x < 0.5) {
    digitalWrite(8, HIGH);  // Turn ON LED
  } else {
    digitalWrite(8, LOW);   // Turn OFF LED
  }

  delay(100);
}