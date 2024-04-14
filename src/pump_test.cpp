#include <Arduino.h>    

// Open-Sero MK1
// Authored by: Jacob Auman and Ash Wheeler

// Motor Driver Pins
#define MOTOR1 22
#define MOTOR2 23

// Buttons
#define BUTTON1 4
#define BUTTON2 5

// void motorForward (int cycle_time){
//     Serial.println("Forward");
//     digitalWrite(MOTOR1,HIGH);
//     digitalWrite(MOTOR2,LOW);
//     delay(cycle_time);
//     Serial.println("Stop");
//     digitalWrite(MOTOR1,LOW);
//     digitalWrite(MOTOR2,LOW);
// }

// void motorReverse (int cycle_time){
//     Serial.println("Reverse");
//     digitalWrite(MOTOR1,LOW);
//     digitalWrite(MOTOR2,HIGH);
//     delay(cycle_time);
//     Serial.println("Stop");
//     digitalWrite(MOTOR1,LOW);
//     digitalWrite(MOTOR2,LOW);
// }

void setup() {
    // Serial
    Serial.begin(115200);
    Serial.println("Hello World");

    // Set pin modes
    pinMode(MOTOR1,OUTPUT);
    pinMode(MOTOR2,OUTPUT);

    pinMode(BUTTON1,INPUT);
    pinMode(BUTTON2,INPUT);

    // Set initial states
    digitalWrite(MOTOR1,LOW);
    digitalWrite(MOTOR2,LOW);

    Serial.println("Goodbye Cruel World");
}


void loop() {
    digitalWrite(MOTOR1,LOW);
    digitalWrite(MOTOR2,LOW);

    
}