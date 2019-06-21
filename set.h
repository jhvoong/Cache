// set.h
// Author: John Voong
// Created on June 20, 2019 at 11:42 PM

#ifndef SET_H
  #define SET_H

#include "block.h"

class Set {
  Block *blocks;
  int numBlocks;
  void updateAges();
public:
  Block* read(void *data);
  Set(int numB, int numS): blocks(new Block(numB, numS)), numBlocks(numB) {}
};

#endif
