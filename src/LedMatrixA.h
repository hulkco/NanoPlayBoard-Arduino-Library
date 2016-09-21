/*
  LedMatrixA.h - Library for the Arduino Nano PlayBoard
  Created by Antonio Morales, June, 2016.
  Contributions by José Juan Sánchez.
  Released under GNU GPL v3.
*/

#ifndef LedMatrixA_h
#define LedMatrixA_h

#include "Arduino.h"
#include "Register.h"
#include "Alphabet.h"
#include "LandscapeNumbers.h"
#include "PinsModelA.h"

class LedMatrixA
{
  public:
    LedMatrixA();
    LedMatrixA(uint8_t data_in, uint8_t clock_in, uint8_t clock_out);
    void clear();
    void print(char symbol);
    void print(const byte pattern[5]);
    void print(char message[]);
    void print(String message);
    void setScrollSpeed(uint8_t speed);
    void printInLandscape(uint8_t number);
    bool isPrintable(char symbol);

  private:
    static uint8_t _column_pins[5];    // Pins attached to the columns of the led matrix
    Register _register;
    uint8_t _scroll_speed;
};

#endif
