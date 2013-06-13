/******************************************************************************
 Simple test to see if the ambient light sensor, the laser sensor, the sound
 sensor and the aux sensors works as expected on a TriggerTrap Shield
 
 Author  : Karl-Petter Åkesson
 E-mail  : karl-petter(a)yelloworb.com
 Date    : June 11th 2013                                   
 Version : 0.1                                              
 
 Copyright (c) 2013 Karl-Petter Åkesson, YellowOrb (http://www.yelloworb.com)
 All right reserved.
  
 This piece of code  is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This code is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this code.  If not, see <http://www.gnu.org/licenses/>.
*******************************************************************************/
const byte AMBIENT_LIGHT_SENSOR = A3;	// A3  = Ambient light sensor
const byte LASER_SENSOR = A4; 		// A4  = Laser sensor
const byte SOUND_IN = A5;		// A5  = Sound sensor
const byte AUX = A0;  			// A0  = Auxiliary port

void setup() {
  Serial.begin(9600);
  Serial.println("Starting light, laser, sound and aux test.");
  Serial.println("Change sensor input to see values change,");
}

void loop() {
  // read sensors and print out sensor value
  Serial.print("Light ");
  Serial.print(analogRead(AMBIENT_LIGHT_SENSOR) >> 2);
  
  Serial.print(" laser ");
  Serial.print(analogRead(LASER_SENSOR) >> 2);
  
  Serial.print(" sound ");
  Serial.print(analogRead(SOUND_IN) >> 2);
  
  Serial.print(" aux ");
  Serial.println(analogRead(AUX) >> 2);
  
  delay(100);
}

