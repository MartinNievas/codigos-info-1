//Libreria para utilizar placa RP1 del laboratorio de técnicas digitales UTN FRC
#ifndef RTH_PINOUT_H
#define RTH_PINOUT_H

#ifndef __WIRING_PI_H__
// If you are not using wiringPi library, use EasyPIO pinout
  #define LED_0 26        //Pin 37
  #define LED_1 21        //Pin 40
  #define LED_2 20        //Pin 38
  #define LED_3 16         //Pin 36
  #define LED_4 12         //Pin 32
  #define LED_5 25         //Pin 22
  #define LED_6 24        //Pin 218
  #define LED_7 23        //Pin 16
  
  //#define BUTTON_0 25     //Pin 22
  //#define BUTTON_1 24     //Pin 18
  //#define BUTTON_2 23     //Pin 16

  #define PWM_0  18        //Pin 12

#else
// wiringPi pinout
  #define LED_0 25        //Pin 37
  #define LED_1 24        //Pin 35
  #define LED_2 23        //Pin 33
  #define LED_3 22        //Pin 31
  #define LED_4 21        //Pin 29
  #define LED_5 30        //Pin 27
  #define LED_6 14        //Pin 23
  #define LED_7 12        //Pin 19
  
  #define BUTTON_0 6      //Pin 22
  #define BUTTON_1 5      //Pin 18
  #define BUTTON_2 4      //Pin 16

  #define PWM_0  1         //Pin 12

#endif

#endif
