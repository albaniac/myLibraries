#include "GyverHacks.h"
/*
   НАСТРОЙКА ЧАСТОТЫ ШИМ (частоты приведены для 16 МГц кварца)
   Ноги 5 и 6 (ВЛИЯЕТ НА millis() и delay() !!!)
   Константа    Делитель    Частота(Гц)
   0x01         1           62500
   0x02         8           7812
   0x03         64          976
   0x04         256         244
   0x05         1024        61

   Ноги 9 и 10 (ВЛИЯЕТ НА РАБОТУ SERVO !!!)
   Константа    Делитель    Частота(Гц)
   0x01         1           31250
   0x02         8           3906
   0x03         64          488
   0x04         256         122
   0x05         1024        30

   Ноги 3 и 11
   Константа    Делитель    Частота(Гц)
   0x01         1           31250
   0x02         8           3906
   0x03         32          976
   0x04         64          488
   0x05         128         244
   0x06         256         122
   0x07         1024        30
*/

void setup() {
  setPWMPrescaler(3, 1024);
}

void loop() {
  // put your main code here, to run repeatedly:

}