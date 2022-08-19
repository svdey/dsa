#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int> m;
      for(auto c : s)  m[c]++;
      int length {0},hold{0};
      for(auto c : m){
        if(c.second % 2 == 0)
          length += c.second;
        else
          hold = max(hold,c.second);
      }
      return length + hold;
    }
};