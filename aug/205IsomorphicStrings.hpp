#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
      if(s.size() != t.size()) return false;
      // unordered_map<char,int> Scount;
      // unordered_map<char,int> Tcount;
      vector<int> map(256,-1);
      vector<bool> checked(256,false);

      for(int i= 0; i < s.size(); i++){
        if(map[s[i]] == -1){
          if(checked[t[i]])  return false;
          map[s[i]] = t[i];
          checked[t[i]] = true;
        }else if(map[s[i]] != t[i]) return false;
      }
      
      return true;
    }
};