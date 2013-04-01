/*
* Secret Knock Project adapted into an Arduino 1.0 libraru for Attiny85
* 
*
* Detects patterns of knocks and triggers a motor to unlock
*it if the pattern is correct.
* The following libraries were used, and converted to objects by Rick Anderson
* Secret Knock Code By
* By Steve Hoefer http://grathio.com
* Version 0.1.10.20.10
* Licensed under Creative Commons Attribution-Noncommercial-Share Alike 3.0
* http://creativecommons.org/licenses/by-nc-sa/3.0/us/
*(In short: Do what you want, just be sure to include this line and the four above it, and don't sell it or use it in anything you sell without contacting me.)
* Turned into an object by Rick Anderson http://github.com/ricklon/attinysecretknock
*
* Manual control of servo by ZipWhip
* http://blog.zipwhip.com/2012/03/28/manual-control-of-a-servo-on-the-arduino-for-the-zipwhip-textspresso-machine/
*/

#include "SecretKnock.h"
//#define giving me trouble
#define SERVO_PIN 1 

int initKnocks[MAX_KNOCKS]= { 50, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; 

SecretKnock sKnock;

void setup() {

sKnock.begin(initKnocks);
  
}

void loop() {
  
  sKnock.checkKnock();

} 


