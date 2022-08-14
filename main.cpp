#include <iostream>
#include "./aug/runingSum.hpp"
using namespace std;

int main() {
  Solution *obj = new Solution();
  for(auto a : obj->runningSum({1,2,3,4}))
    cout << a << ',';
    return 0;
}