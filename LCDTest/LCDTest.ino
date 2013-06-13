/******************************************************************************
 Simple test to see that the LCD works as expected on a TriggerTrap Shield.
 Will print Count on the top row and on the lower row an increasing number
 that starts on 0
 
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
#include <LiquidCrystal.h>
#include <LiquidCrystal_SR_LCD3.h>

LiquidCrystal_SR_LCD3 lcd = LiquidCrystal_SR_LCD3(11, 10, 12 ,2);

void setup() {   
  lcd.begin(8, 2);
}

int count = 0;

void loop() {
  lcd.clear();
  lcd.print("Count");
  lcd.setCursor(0,1);
  lcd.print(count++);
  delay(1000);
}
