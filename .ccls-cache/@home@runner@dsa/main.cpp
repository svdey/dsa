#include "./customHeaders/LinkedList.hpp"
//    import class file
#include "./aug/409LongestPalindrome.hpp"
#include <iostream>
using namespace std;

int main() {
  Solution *obj = new Solution();
  // String 
  cout << obj->longestPalindrome("civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth");
  
  // Single output
  // cout << obj->maxProfit({7,1,5,3,6,4});
  
  
  // vector output
  // for (auto a : obj->maxProfit({7,1,5,3,6,4}))
  //   cout << a << ',';


  
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