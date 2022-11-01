#include "./customHeaders/LinkedList.hpp"
//    import class file
// #include "./aug/70ClimbingStairs.hpp"
#include "./Oct/766ToeplitzMatrix.hpp"
#include <iostream>
using namespace std;

int main() {
  Solution *obj = new Solution();
  //  int
  // cout << obj->climbStairs(3);
  // String
  // cout << (obj->convert("PAYPALISHIRING", 4) == "PINALSIGYAHRPI");

  // Single output
  // cout << obj->search({-1,0,3,5,9,12},2);

  // vector output
  // for (auto a : obj->maxProfit({7,1,5,3,6,4}))
  //   cout << a << ',';

  // boolian Output
  cout << obj->isToeplitzMatrix({{1,2,3,4},{5,1,2,3},{9,5,1,2}});

  // Linked List
  // ListNode* list1 = new ListNode(1);
  // list1->next = new ListNode(2);
  // list1->next->next = new ListNode(4);
  // list1->next->next->next = new ListNode(5);
  // list1->next->next->next->next = list1->next;

  // ListNode* list2 = new ListNode(1);
  // list2->next = new ListNode(3);
  // list2->next->next = new ListNode(4);

  // ListNode* list = obj->detectCycle(list1);
  // while(list){
  //   cout << list->val<<' ';
  //   list = list->next;
  // }
  return 0;
}