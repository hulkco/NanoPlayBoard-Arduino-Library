/*
  LedMatrix.h - Library for the Arduino Nano PlayBoard
  Created by Antonio Morales and José Juan Sánchez, September, 2016.
  Released under GNU GPL v3.
*/

#ifndef LedMatrix_h
#define LedMatrix_h

#include "Arduino.h"
#include "Register.h"
#include "Alphabet.h"
#include "LandscapeNumbers.h"
#include "PinsModelB.h"

class LedMatrix
{
  public:
    LedMatrix();
    LedMatrix(uint8_t data_in, uint8_t clock_in, uint8_t clock_out);
    void clear();
    void print(char symbol);
    void print(const byte pattern[5]);
    void print(char message[]);
    void print(String message);
    void setScrollSpeed(uint8_t speed);
    void printInLandscape(uint8_t number);
    bool isPrintable(char symbol);

  private:
    static uint8_t _column_values[5];
    Register _register;
    uint8_t _scroll_speed;
};

#endif
