#include "TestSuite.h"
#include <iostream>
using namespace std;
TestSuite::TestSuite(){
 testinglist = new LinkedListOfInts();
}

TestSuite::~TestSuite(){
  while(!testinglist->isEmpty()){
    testinglist->removeBack();
  }
}

void TestSuite::runTests(){
  //display();
  if(testinglist->isEmpty()){
      cout << "Test 01: isEmpty() empty list return true: PASSED"<<endl;
  }else{
      cout << "Test 01: isEmpty() empty list return true: FAILED"<<endl;
  }
  if(testinglist->size() == 0){
    cout << "Test 02: empty list return size 0: PASSED"<<endl;
  }else{
    cout << "Test 02: empty list return size 0: FAILED"<<endl;
  }
  testinglist->addFront(999);
//
  if(testinglist->toVector().at(0) == 999){
    cout << "Test 03: addFront can add to an empty list: PASSED"<<endl;
  }else{
    cout << "Test 03: addFront can add to an empty list: FAILED"<<endl;
  }
  display();
  testinglist->addFront(888);
  display();
  if(testinglist->toVector().at(0) == 999){
    cout << "Test 04: addFront can add to the right place: PASSED"<<endl;
  }else{
    cout << "Test 04: addFront can add to the right place: FAILED"<<endl;
  }
  testinglist->addBack(333);
  display();
  if(testinglist->toVector().at(0) == 333){
    cout << "Test 05: addBack can add to the right place: PASSED"<<endl;
  }else{
    cout << "Test 05: addBack can add to the right place: FAILED"<<endl;
  }
  if(testinglist->isEmpty()){
    cout << "Test 06: isEmpty() not empty list return false: FAILED"<<endl;
  }else{
    cout << "Test 06: isEmpty() not empty list return false: PASSED"<<endl;
  }
  if(testinglist->size() == 3){
    cout << "Test 07: list can return right size: PASSED"<<endl;
  }else{
    cout << "Test 07: list can return right size: FAILED"<<endl;
  }
  testinglist->removeFront();
  display();
  if((testinglist->toVector().at(1) == 888)&&(testinglist->size() == 2)){
    cout << "Test 08: removeFront can remove Front Node: PASSED"<<endl;
  }else{
    cout << "Test 08: removeFront can remove Front Node: FAILED"<<endl;
  }
  testinglist->removeBack();
  display();
  if(testinglist->toVector().at(0) == 888){
    cout << "Test 09: removeBack can remove Back Node: PASSED"<<endl;
  }else{
    cout << "Test 09: removeBack can remove Back Node: FAILED"<<endl;
  }
  if(testinglist->search(888)){
    cout << "Test 10: search can find the value in list: PASSED"<<endl;
  }else{
    cout << "Test 10: search can find the value in list: FAILED"<<endl;
  }
  if(testinglist->search(123)){
    cout << "Test 11: search a value are not in list can not find the value in list: FAILED"<<endl;
  }else{
    cout << "Test 11: search a value are not in list can not find the value in list: PASSED"<<endl;
  }
}

void TestSuite::display(){
  cout << "[";
  for(int i = 0; i < testinglist->size(); i++){
    cout << testinglist->toVector().at(i)<< " ";
  }
  cout <<"]"<< endl;
}
