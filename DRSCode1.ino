                                                             #include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

const int buttonOpen = 2;
const int buttonClose = 3;
const int ledPin = 13;

int closedPWM = 150;  // PWM-Wert für geschlossene Position
int openPWM = 600;  // PWM-Wert für offene Position

void setup() {
  pinMode(buttonOpen, INPUT_PULLUP);
  pinMode(buttonClose, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  pwm.begin();
  pwm.setPWMFreq(60);  // 60 Hz
  closeSpoiler();  // Start in geschlossener Position
}

void loop() {
  if (digitalRead(buttonOpen) == LOW) {
    openSpoiler();
    delay(500);  // Entprellzeit
  }
  
  if (digitalRead(buttonClose) == LOW) {
    closeSpoiler();
    delay(500);  // Entprellzeit
  }
}

void openSpoiler() {
  pwm.setPWM(0, 0, openPWM);
  pwm.setPWM(1, 0, openPWM);
  digitalWrite(ledPin, HIGH);  // LED ein
}

void closeSpoiler() {
  pwm.setPWM(0, 0, closedPWM);
  pwm.setPWM(1, 0, closedPWM);
  digitalWrite(ledPin, LOW);  // LED aus
}