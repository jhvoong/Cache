// address.cpp
// Author: John Voong
// Created on June 21, 2019 at 12:29 AM

#include <cmath>

#include "address.h"

Address::Address(int numB, int numS)
{
    int numSetBits = getNumBits(numS);
    int numOffsetBits = getNumBits(numB);
    set = new unsigned char[numSetBits];
    offset = new unsigned char[numOffsetBits];
    tag = new unsigned char[32 - numOffsetBits - numSetBits];
} // standard constructor

// return the number of bits to represent either the cache's sets or blocks
int Address::getNumBits(int num)
{
  return ceil(log2(num));
} // getNumBits()
