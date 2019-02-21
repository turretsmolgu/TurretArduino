#include <Servo.h> //используем библиотеку для работы с сервоприводом

Servo servo; //объявляем переменную servo типа Servo
int sd = 100;
int angle = -70;

void setup() {
  servo.attach(7);
  servo.write(-70);
}

void loop() {
  servo.write(angle);
  delay(sd);
  angle = (angle + 5) % 172;

}
