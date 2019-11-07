
// TemperatureSensor.cpp

#include "TemperatureSensor.h"


// Function declarations

// Returns: True if the setup succeeds, false if it fails
bool TemperatureSensor::Setup(int pin)
{
  // Save the pin
  SensorPin = pin;

  // TOOD: Implement this function
  Serial.println("Temperature sensor setup not yet implemented");

  return false;
}

// Returns: The current temperature, in degrees Celsius, or int.min if it has not been setup yet
int TemperatureSensor::Loop()
{
  // TOOD: Implement this function
  Serial.println("Temperature sensor loop not yet implemented");

  // Return an error
  return TemperatureError;
}
