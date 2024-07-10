#include <Arduino.h>

#define LED_PIN 2 // Define the pin where the LED is connected

void setup()
{
  // Initialize the digital pin as an output.
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN, HIGH);
  // Wait for a second
  delay(1000);
  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN, LOW);
  // Wait for a second
  delay(1000);
}
