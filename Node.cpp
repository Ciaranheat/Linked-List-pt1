#include "Node.h"
#include <iostream>

using namespace std;

Node :: Node(Student* newstn) {
  stn = newstn;
  next = NULL;
}

Node :: ~Node() {
  delete stn;
}

void Node :: setNext(Node* newNode) {
  next = newNode;
}

Node* Node :: getNext() {
  return next;
}

Student* Node :: getStudent() {
  return stn;
}
