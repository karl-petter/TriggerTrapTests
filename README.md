# Test Sketches for Triggertrap Shield

After soldering my TriggerTrap Shield I could not get it to work. To debug if there were any problems with the buttons, LCD or the sensors I wrote these small Arduino Sketches to test that the hardware works.

## ButtonTest

Test to see that all the buttons on a TriggerTrap Shield work as expected. Start the sketch and activate the Serial Monitor. Will continuously prints lines such as "Start 1 mode 1 select 1 up 1 down 1" where the 1/0 after the name is the state for that button. Press the buttons to see the state change from 1 to 0 when pressed.

## FocusShutterTest

Test to see if the focus and shutter control works as expected on a TriggerTrap Shield. Once the Sketch is running, activate the Serial Monitor to get some extra feedback. Connect your camera to the camera control connector and press the Start button to focus. Press Mode button for the shutter(ie. take a photo). Depending on camera model you might need to press and hold Start(Focus) before the camera will take a photo when you press Mode(Shutter).

## LCDTest

Test to see that the LCD works as expected on a TriggerTrap Shield. Run the sketch and it will print "Count" on the top row of the display on the shield. On the lower row there will be an increasing number starting at 0. Once a second the number will increase with one.

## LightLaserSoundAuxTest

Test to see if the ambient light sensor, the laser sensor, the sound sensor and the aux sensors works as expected on a TriggerTrap Shield. Start the sketch and activate the Serial Monitor. Will continuously prints lines such as "Light 50 laser 231 sound 34 aux 255" where the number after the name of the sensor is the current input value, ranging from 0 to 255. Change the inputs, and see that the numbers change.

# TriggerTrap

For more information about TriggerTrap go to http://www.triggertrap.com

# Open Source & Licencing information 

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

## Restrictions

The only thing we are keeping control over is the Triggertrap trademarks (name and logo). Full details of the Triggertrap licence is available on http://triggertrap.com/license/ 

# Changenotes

## 0.1 (11 June 2013)
* Initial release 
