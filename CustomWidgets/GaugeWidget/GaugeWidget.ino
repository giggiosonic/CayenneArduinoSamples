/*
Cayenne Gauge Widget Example

This sketch shows how to set up a Gauge Widget with Cayenne.

Steps:
1. In the Cayenne Dashboard add a new Gauge Custom Widget.
3. Select Virtual I/O and a virtual pin number.
4. Set VIRTUAL_PIN to the pin number you selected.
5. Select a data type and unit, e.g. Temperature, Celsius.
6. Attach an analog input device (e.g. a temperature sensor) to your Arduino.
7. Set the token variable to match the Arduino token from the Dashboard.
8. Modify the CAYENNE_OUT(VIRTUAL_PIN) function to send data from your sensor.
8. Compile and upload this sketch.
9. Once the Arduino connects to the Dashboard it should automatically update the Gauge widget with data.

For further examples of how to send data to Cayenne see the example sketches under Sensors.
*/

#define CAYENNE_PRINT Serial  // Comment this out to disable prints and save space
#include <CayenneEthernet.h>

// Cayenne authentication token. This should be obtained from the Cayenne Dashboard.
char token[] = "AuthenticationToken";

void setup()
{
	Serial.begin(9600);
	Cayenne.begin(token);
}

void loop()
{
	Cayenne.run();
}
