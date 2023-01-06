#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;

int main() {

  Student* s1 = new Student;
  Node* n1 = new Node(s1);

  Student* s2 = new Student;
  Node* n2 = new Node(s2);

  n1 -> setNext(n2);

  if(n2 == n1 -> getNext()) {
    cout << "Ok" << endl;
  }
  if(n1 -> getStudent() == s1) {
    cout << "Ok" << endl;

  }

}
