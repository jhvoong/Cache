// queue.h
// Author: John Voong
// Created on June 19, 2019 at 10:17 AM

#ifndef QUEUE_H
  #define QUEUE_H

#include "exceptions.h"

template <class T>
class Queue {
  int front;
  int back;
  int size;
  T *data;
public:
  Queue(int initialSize);
  void enqueue(T data);
  T dequeue();
};

#endif
