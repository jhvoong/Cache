// cache.cpp
// Author: John Voong
// Created on June 18, 2019 at 11:11 PM

#include <cstdlib>

#include "cache.h"

/*
Cache::Cache(int numL, int numS)
{
  sets = (Set*) malloc(sizeof(Set) * numSets);
  for (int i = 0; i < numSets; i++) {
    //sets[i]. = (Line*) malloc(sizeof(Line) * numL);
  }
  numSets = numS;
  blocksPerSet = numL;
} // constructor
*/

int Cache::evict()
{
  return 0;
} // evict()

Block* Cache::read(void *data)
{
  Block *block = NULL;
  for (int i = 0; i < numSets; i++) {
    block = sets[i].read(data);
    if (block != NULL) {
      return block;
    }
  }
  return NULL;
}
/*
int Cache::read(void *data)
{
  void *dataLocation = find(data);
  if (dataLocation == NULL) {
    // miss
    dataLocation = 0;//readDrive(data);
  }
  updateAges();
  return dataLocation;

  return 0;
} // read()
*/

int Cache::write(void *data)
{
  return 0;
} // write()
