// address.h
// Author: John Voong
// Created on June 21, 2019 at 12:13 AM

#ifndef ADDRESS_H
  #define ADDRESS_H

#include <cmath>

class Address {
  unsigned char *set;  // numSetBits = ceil(log2(numSets))
  unsigned char *offset; // numOffsetBits = ceil(log2(blocksPerSet))
  unsigned char *tag; // numTagBits = 32 - numOffsetBits - numSetBits
public:
  Address(int numB, int numS);
  int getNumBits(int num);
};

#endif
