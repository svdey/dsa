#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         set<ListNode*> visited;
//         ListNode* cur = head;
//         while(cur){
//             if(visited.find(cur) != visited.end()){
//                 return cur;
//             }else{
//                 visited.insert(cur);
//             }
//             cur = cur->next;
//         }
//         return NULL;
//     }
// };

class Solution {
    ListNode *findNode(ListNode *slow,ListNode *first){
      if(first == slow) return first;
      return (slow->next,first->next->next);
    }
    ListNode *FindLoopPoint(ListNode* meet,ListNode* head){
      if(meet == head) return head;
      return FindLoopPoint(meet->next,head->next);
    }
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *first = head;
        ListNode* meet = (slow->next,first->next->next);        
        return FindLoopPoint(meet->next,head->next);
    }
};