


#include "TemperatureSensor.h"

// Hardware pin definitions
const int PinTemperature = 2;
const int PinO2Sensor = 3;
const int PinCO2Sensor = 4;
const int PinpHSensor = 5;
const int PinAirMoisture = 6;
const int PinSoilMoisture = 7;
const int PinLightSensor = 8;
const int PinDoorSensor = 9;
const int PinRainGauge = 10;
const int Pin = 11;


// Global variables

const unsigned long MillisPerLoop = 100;
unsigned long TimeMillis = 0;

TemperatureSensor TempSensor;

// put your setup code here, to run once
void setup()
{
  Serial.begin(115200);
  Serial.println("Beginning setup of PlantKeeper.");

  // Run the setup for each of the sensors
  TempSensor.Setup(PinTemperature);

  // TODO: Implement all of these sensors
  
  /*
  O2Sensor.Setup(PinO2Sensor);
  CO2Sensor.Setup(PinCO2Sensor);
  pHSensor.Setup(PinpHSensor);
  AirMoisture.Setup(PinAirMoisture);
  LightSensor.Setup(PinLightSensor);
  DoorSensor.Setup(PinDoorSensor);
  RainGauge.Setup(PinRainGauge);
  .Setup(Pin);
  */

}

// put your main code here, to run repeatedly
void loop()
{
  // Get the current millisecond count
  unsigned long CurrentMillis = millis();
  
  // Find out how much time has elapsed since the previous loop
  unsigned long ElapsedTimeMillis = CurrentMillis - TimeMillis;

  // If not enough time has elapsed, return
  if (ElapsedTimeMillis < MillisPerLoop)
    return;

  Serial.println("Running loop of PlantKeeper.");


  // Run the loop for each of the sensors
  TempSensor.Loop();

  // TODO: Implement all of these sensors

  /*
  O2Sensor.Loop(PinO2Sensor);
  CO2Sensor.Loop(PinCO2Sensor);
  pHSensor.Loop(PinpHSensor);
  AirMoisture.Loop(PinAirMoisture);
  LightSensor.Loop(PinLightSensor);
  DoorSensor.Loop(PinDoorSensor);
  RainGauge.Loop(PinRainGauge);
  .Loop(Pin);
  */


  // Save the new time
  TimeMillis = CurrentMillis;
}
