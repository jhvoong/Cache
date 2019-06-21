// block.h
// Author: John Voong
// Created on June 20, 2019 at 11:44 PM

#ifndef BLOCK_H
  #define BLOCK_H

#include "address.h"

class Block {
  Address address;
  int age;
  void *data;
  int dirty;
  int numData;
  int valid;
public:
  Block(int numB, int numS):
    address(Address(numB, numS)), age(0), data(0), dirty(0), numData(0), valid(0) {}
  bool operator==(void *data);
};

#endif
