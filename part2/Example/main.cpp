#include "Example.hpp"

int main() {
  Example<int> intExample(100);
  int a = intExample.getValue();
  intExample.setValue(100);
  
  auto doubleExample = new Example<double>(10.0);
  auto doubleValue = doubleExample->getValue();
  doubleExample->setValue(doubleValue + 15.0);
  delete doubleExample;

  struct MyValue {
    int a;
    bool b;
  };

  Example<MyValue> myExample({40, true});
  auto myValue = myExample.getValue();
  myValue.a -= 10;
  myValue.b = false;
  myExample.setValue(myValue);
}