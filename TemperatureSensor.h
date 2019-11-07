
// TemperatureSensor.h
#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H

// Include all the standard Arduino libraries
#include <arduino.h>


class TemperatureSensor
{
  private:
    // Private variables
    int SensorPin;
  
  public:

    // Public variables
    const int TemperatureError = -1000;
  
    // Public function prototypes
    bool Setup(int pin);
    int Loop();

};



#endif // TEMPERATURE_SENSOR_H
