/*
  created on Apr 2025
  by yoochan Han"
  This program  will activate servo motor with Potentiometer
*/
#include <Servo.h>

Servo servoNumber1;
const int POT_PIN = A0; //pin A0 to read analog inpit

int value; //variable for save analog value

void setup() {
    // setup servo pins
    servoNumber1.attach(4);
    servoNumber1.write(0);
    // setup the Potentiometer
    pinMode(POT_PIN, INPUT);
    Serial.begin(9600);
    
}

void loop() {
    value = analogRead(POT_PIN); //analog value max value is 10k
    // servo
    servoNumber1.write(value/10*1.8);
    Serial.print(value);
    Serial.print(" ohms\n");
    delay(100);
}
