// queue.cpp
// Author: John Voong
// Created on June 19, 2019 at  6:10 PM

#include <iostream>

#include "queue.h"

template <class T>
Queue<T>::Queue(int initialSize) {
  front = back = 0;
  size = initialSize;
  data = (T*) malloc(sizeof(T) * initialSize);
} // constructor

template <class T>
void Queue<T>::enqueue(T newData)
{
  try {
    if (back - front >= size) {
      throw OVERFLOW;
    }
  }
  catch (int x) {
    return;
  }

  data[front++] = newData;
}

template <class T>
T Queue<T>::dequeue()
{
  try {
    if (back == front) {
      throw UNDERFLOW;
    }
  }
  catch (int x) {
    return;
  }
  return data[back++];
}
