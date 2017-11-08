#ifndef TESTSUITE_H
#define TESTSUITE_H
#include "LinkedListOfInts.h"

class TestSuite{

private:
  LinkedListOfInts* testinglist;

public:
  TestSuite();
  ~TestSuite();
  void display();
  void runTests();
};
#endif
