#include "./aug/392IsSubsequence.hpp"
#include <iostream>
using namespace std;

int main() {
  Solution *obj = new Solution();

  // String 
  cout << obj->isSubsequence("acb","ahbgdc");
  
  // Single output
  // cout << obj->pivotIndex({1, 2, 4, 3});

  // vector output
  // for (auto a : obj->runningSum({1, 2, 3, 4}))
  //   cout << a << ',';
  return 0;
}