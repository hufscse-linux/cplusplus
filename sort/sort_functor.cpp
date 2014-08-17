#include <iostream>
#include <algorithm>

#include "class.h"

using namespace std;

int main(int argc, char** argv) {
  IntValue* values[10];
  for(int i = 0; i < 10; ++i) {
    values[i] = new IntValue(i);
    cout << values[i]->value << " ";
  }
  cout << endl;
  sort(values, values + 10);
  for(int i = 0; i < 10; ++i) {
    cout << values[i]->value << " ";
  }
  cout << endl;
  return 0;
}
