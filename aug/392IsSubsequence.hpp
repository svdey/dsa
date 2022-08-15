#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
      if(t.size() < s.size()) return false;
      int i{0};
      for(int j = 0;i < s.size() && j < t.size();j++)
        if(s[i] == t[j]) i++;

      return i == s.size() ? true :false;      
    }
};