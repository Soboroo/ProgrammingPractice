// WaterSense, FireSense Integration
#include <Servo.h>
const int pinServo = 3;
const int lm35 = 1;
const int water = A0;
Servo servo;
byte c = 0;

class segment {
  int pin[4];
  int result[4] = {0, 0, 0, 0};
  void tenConvertTwo(int num) {
    for (int i = 0; i < 4; i++)
      result[i] = 0;
    for (int i = 0; num > 0; i++) {
      int binary = num % 2;
      result[i] = binary;
      num /= 2;
    }
  }

public:
  segment(int pin1, int pin2, int pin3, int pin4) {
    pin[0] = pin1;
    pin[1] = pin2;
    pin[2] = pin3;
    pin[3] = pin4;
    for (int i : pin)
      pinMode(i, OUTPUT);
  }
  void setSegment(int num) {
    if (num > 9 || num < 0) {
      for (int i : pin)
        digitalWrite(i, HIGH);
    } else {
      tenConvertTwo(num);
      for (int i = 0; i < 4; i++)
        digitalWrite(pin[i], result[i]);
    }
  }
};

segment MySegment1(8, 9, 10, 11);
segment MySegment2(4, 5, 6, 7);

void setup() {
  servo.attach(pinServo);
  pinMode(lm35, INPUT);
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(lm35);
  int temperatureC = reading * 5 * 100 / 1024.0;
  servo.write(temperatureC >= 30 && temperatureC < 70 ? 180 : 90);
  delay(500);
  //------------------------------------------------

  int result = analogRead(0);
  int display;
  if (result < 400) {
    display = 60;
    Serial.write(0);
  } else if (400 <= result && result < 600) {
    display = 50;
    Serial.write(1);
  } else if (600 <= result && result < 800) {
    display = 40;
    Serial.write(2);
  } else {
    display = 30;
    Serial.write(3);
  }

  MySegment2.setSegment(display / 10);
  MySegment1.setSegment(0);
  delay(1000);
}
