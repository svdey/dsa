#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1) return s;
      string res{""};

      for(int i=0; i < numRows;i++){
        bool step = true;
        for(int j = i; j < s.size();){
          res += s[j];
          if(i == 0 || i == numRows -1){
            j += 2 * (numRows -1);
            continue;
          }
          j += step ? 2 * (numRows - i - 1) : 2 * i;
          step = !step;
        }
      }
      return res;
    }
};