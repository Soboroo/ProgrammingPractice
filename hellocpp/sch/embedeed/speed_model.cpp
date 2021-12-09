#include <cmath>
#include <iostream>
using namespace std;

class Moter {
  int pin1, pin2, pwm;
  double speed = 0;
  double deltaSpeed(int x, int y, int step) {
    return floor(
               10.0 * abs(x - y) *
               exp(-10.0 / 11 * (-2.0 / 255 * abs(x - y) + step - 5)) /
               (22 * exp(-10.0 / 11 * (-2.0 / 255 * abs(x - y) + step - 5)) +
                11 * pow(exp(-10.0 / 11 * (-2.0 / 255 * abs(x - y) + step - 5)),
                         2) +
                11) *
               100) /
           100.0;
    // https://www.geogebra.org/calculator/bdkxreqa
  }

public:
  Moter(int pin1, int pin2, int pwm) {
    this->pin1 = pin1;
    this->pin2 = pin2;
    this->pwm = pwm;
    this->speed = 0;
  }
  void setSpeed(int speed) {
    int beforeSpeed = this->speed;
    double delta;
    int i = this->speed;
    while (round(this->speed) != speed) {
      delta = deltaSpeed(speed, beforeSpeed, i - beforeSpeed);
      this->speed < speed ? this->speed += delta : this->speed -= delta;
      cout << "speed: " << round(this->speed) << "delta: " << delta << "\n";
      i++;
    }
    this->speed = round(this->speed);
  }
  void changeDirection(int x) {}
};

Moter test(3, 4, 5);

int main() {
  // printf("%f",
  //       floor(10 * 185.5 * exp(-10.0 / 11 * (-2.0 / 255 * 185.5 + 9 - 5)) /
  //             (22 * exp(-10.0 / 11 * (-2.0 / 255 * 185.5 + 9 - 5)) +
  //              11 * pow(exp(-10.0 / 11 * (-2.0 / 255 * 185.5 + 9 - 5)), 2) +
  //              11)));
  test.setSpeed(160);
  test.setSpeed(180);
  test.setSpeed(100);
  test.setSpeed(120);
  test.setSpeed(0);
  // for (int i = 0; i < 14; i++) {
  //  printf("%d\n",
  //         (int)floor(
  //             10 * 185.5 * exp(-10.0 / 11 * (-2.0 / 255 * 185.5 + i - 5)) /
  //             (22 * exp(-10.0 / 11 * (-2.0 / 255 * 185.5 + i - 5)) +
  //              11 * pow(exp(-10.0 / 11 * (-2.0 / 255 * 185.5 + i - 5)), 2) +
  //              11)));
  //}
}