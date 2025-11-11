// Project 1 - LED Blink
// Author: Paramvir Singh, Devjot Singh, Jovan Singh
// Date: November 2025

int ledPin = 13; // Pin 13 connected to LED

void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn LED ON
  delay(700);                 // Wait 700 ms 
  digitalWrite(ledPin, LOW);  // Turn LED OFF
  delay(700);                 // Wait 700 ms
}
