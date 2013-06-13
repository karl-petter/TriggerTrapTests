/******************************************************************************
 Simple test to see if the focus and shutter control works as expected on a
 TriggerTrap Shield
 
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
#define START_BUTTON 7
#define MODE_BUTTON 6

const byte FOCUS_TRIGGER_PIN = 9;	// D13 = Digital out - Camera Trigger A
const byte SHUTTER_TRIGGER_PIN = 8;	// D12 = Digital out - Camera Trigger B

void setup() {
  // initialize buttons
  pinMode(START_BUTTON, INPUT);
  digitalWrite(START_BUTTON, HIGH);
  
  pinMode(MODE_BUTTON, INPUT); 
  digitalWrite(MODE_BUTTON, HIGH);
  
  pinMode(FOCUS_TRIGGER_PIN, OUTPUT);
  pinMode(SHUTTER_TRIGGER_PIN, OUTPUT);
  
  Serial.begin(9600);
  Serial.println("Starting Focus and Shutter Test");
  Serial.println("Press Start to focus, and Mode for Shutter");
}

int startButtonState = 0;
int modeButtonState = 0;
boolean focus = false;
boolean shutter = false;

void loop() {
  // read the state of the buttons
  startButtonState = digitalRead(START_BUTTON);
  modeButtonState = digitalRead(MODE_BUTTON);
  
  if(0 == startButtonState) {
    digitalWrite(FOCUS_TRIGGER_PIN,LOW); //trigger camera
    if(!focus) {
      Serial.println("Focus");
      focus = true;
    }
  } else {
    focus = false;
    digitalWrite(FOCUS_TRIGGER_PIN, HIGH);
  }
  
  if(0 == modeButtonState) {
    digitalWrite(SHUTTER_TRIGGER_PIN, LOW); //trigger camera
    if(!shutter) {
      Serial.println("Shutter");
      shutter = true;
    }
  } else {
    shutter = false;
    digitalWrite(SHUTTER_TRIGGER_PIN, HIGH);
  }
}


