#include <Arduino.h>    

// Open-Sero MK1
// Authored by: Jacob Auman and Ash Wheeler

// Onboard Led Pins
#define LED1 2

// Motor Driver Pins
#define MOTOR1 22
#define MOTOR2 23

// Buttons
#define BUTTON1 1
#define BUTTON2 3
#define BUTTON3 21

// Variables
int cycle_time = 1000;
int state = 0;  // 0 = stop, 1 = forward, 2 = reverse

void motorForward (int cycle_time){
    Serial.println("Forward");
    digitalWrite(MOTOR1,HIGH);
    digitalWrite(MOTOR2,LOW);
    delay(cycle_time);
    Serial.println("Stop");
    digitalWrite(MOTOR1,LOW);
    digitalWrite(MOTOR2,LOW);
};

void motorReverse(int cycle_time){
    Serial.println("Reverse");
    digitalWrite(MOTOR1,LOW);
    digitalWrite(MOTOR2,HIGH);
    delay(cycle_time);
    Serial.println("Stop");
    digitalWrite(MOTOR1,LOW);
    digitalWrite(MOTOR2,LOW);
};

void topButton(){
    Serial.println("Top Button Pressed");
    digitalWrite(LED1,HIGH);
    delay(1000);
    state = 1;
};

void bottomButton(){
    Serial.println("Bottom Button Pressed");
    digitalWrite(LED1,HIGH);
    delay(1000);
    state = 2;
};

void modeButton(){
    Serial.println("Mode Button Pressed");
    digitalWrite(LED1,HIGH);
    delay(1000);
    state = 0;
};

void setup() {
    // Serial
    Serial.begin(9600);
    Serial.println("Hello World");

    // Set pin modes
    pinMode(LED1,OUTPUT);
    pinMode(MOTOR1,OUTPUT);
    pinMode(MOTOR2,OUTPUT);

    pinMode(BUTTON1,INPUT_PULLUP);
    pinMode(BUTTON2,INPUT_PULLUP);
    pinMode(BUTTON3,INPUT_PULLUP);

    // Set initial states
    digitalWrite(MOTOR1,LOW);
    digitalWrite(MOTOR2,LOW);

    // Button Interrupts
    attachInterrupt(BUTTON1, topButton, RISING);
    attachInterrupt(BUTTON2, bottomButton, RISING );
    attachInterrupt(BUTTON3, modeButton, CHANGE);

    Serial.println("Goodbye Cruel World");
}


void loop() {
    if (digitalRead(LED1) == HIGH){
        digitalWrite(LED1,LOW);
    } 
}