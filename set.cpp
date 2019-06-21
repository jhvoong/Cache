// set.cpp
// Author: John Voong
// Created on June 20, 2019 at 11:45 PM

#include <stdlib.h>

#include "set.h"

void Set::updateAges()
{
  // int oldest or queue
  for (int i = 0; i < numBlocks; i++) {
 //   if (blocks[i].getAge();
  }
} // updateAges()

Block* Set::read(void *data)
{
  for (int i = 0; i < numBlocks; i++) {
    if (blocks[i] == data) {
      return &blocks[i];
    }
  }
  return NULL;
}
