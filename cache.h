// cache.h
// Author: John Voong
// Created on June 18, 2019 at 12:58 PM

#ifndef CACHE_H
  #define CACHE_H

#include <cstdlib>

#include "set.h"

class Cache {
  int blocksPerSet;
  int numSets;
  Set *sets;
private:
  int evict(); // frees space for one block in the cache
public:
  Cache(int numB, int numS):
    blocksPerSet(numB), numSets(numS), sets(new Set(numB, numS)) {}
  Block* read(void *data); // reads data from the cache
  int write(void *data); // writes data into the cache
  void test();
};

#endif
