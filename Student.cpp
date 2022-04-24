#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int stdId, char stdName[20]) {
  studentId = stdId;
  strcpy(name, stdName);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student Id: " << studentId << endl;
  cout << "Student Name: " << name << endl;
}
