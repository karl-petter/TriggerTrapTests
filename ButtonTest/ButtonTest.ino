/******************************************************************************
 Simple test to see that all the buttons on a TriggerTrap Shield work as
 expected
 
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
#define SELECT_BUTTON 5
#define UP_BUTTON 4
#define DOWN_BUTTON 3

int startButtonState = 0;
int modeButtonState = 0;
int selectButtonState = 0;
int upButtonState = 0;
int downButtonState = 0;

void setup() {
  // initialize all input pins, as input and pullup high
  pinMode(START_BUTTON, INPUT);
  digitalWrite(START_BUTTON, HIGH);
  
  pinMode(MODE_BUTTON, INPUT); 
  digitalWrite(MODE_BUTTON, HIGH);
  
  pinMode(SELECT_BUTTON, INPUT); 
  digitalWrite(SELECT_BUTTON, HIGH);
  
  pinMode(UP_BUTTON, INPUT); 
  digitalWrite(UP_BUTTON, HIGH);
  
  pinMode(DOWN_BUTTON, INPUT);
  digitalWrite(DOWN_BUTTON, HIGH);
  
  Serial.begin(9600);
  Serial.println("Starting button test.");
  Serial.println("Press buttons to see the state change from 1 to 0.");
}

void loop(){
  // read the state of the buttons
  startButtonState = digitalRead(START_BUTTON);
  modeButtonState = digitalRead(MODE_BUTTON);
  selectButtonState = digitalRead(SELECT_BUTTON);
  upButtonState = digitalRead(UP_BUTTON);
  downButtonState = digitalRead(DOWN_BUTTON);
  
  // print out the results  
  Serial.print("Start ");
  Serial.print(startButtonState);
  
  Serial.print(" mode ");
  Serial.print(modeButtonState);
  
  Serial.print(" select ");
  Serial.print(selectButtonState);
  
  Serial.print(" up ");
  Serial.print(upButtonState);
  
  Serial.print(" down ");
  Serial.println(downButtonState);
}
