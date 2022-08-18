#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      vector <ListNode*> a={head};
      while(a.back()->next)  a.push_back(a.back()->next);

      return a[a.size()/2];
    }
};