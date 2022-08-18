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

//               flud algo

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      ListNode* slow = head;
      ListNode* first = head;
      while(first){
        slow = slow->next;
        first = first->next->next;
      }
      return slow;
    }
};

//          recurtion
class Solution {
    ListNode * findMid(ListNode* slow,ListNode* first){
      if(!first) return slow;
      return findMid(slow->next,first->next->next);
    }
public:
    ListNode* middleNode(ListNode* head) {
      ListNode* slow = head;
      ListNode* first = head;
      return findMid(slow->next,first->next->next);
    }
};