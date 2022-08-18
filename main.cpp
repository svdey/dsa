#include "./customHeaders/LinkedList.hpp"
//    import class file
#include "./aug/876MiddleoftheLinkedList.hpp"
#include <iostream>
using namespace std;

int main() {
  Solution *obj = new Solution();

  // String 
  // cout << obj->isIsomorphic("acb","ahbgdc");
  
  // Single output
  // cout << obj->pivotIndex({1, 2, 4, 3});

  // vector output
  // for (auto a : obj->runningSum({1, 2, 3, 4}))
  //   cout << a << ',';


  
  // Linked List
  ListNode* list1 = new ListNode(1);
  list1->next = new ListNode(2);
  list1->next->next = new ListNode(4);
  list1->next->next->next = new ListNode(5);
  
  // ListNode* list2 = new ListNode(1);
  // list2->next = new ListNode(3);
  // list2->next->next = new ListNode(4);

  ListNode* list = obj->middleNode(list1);
  while(list != nullptr){
    cout << list->val<<' ';
    list = list->next;
  }
  return 0;
}