#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchIndex(vector<int> nums,int s,int e,int key){
      if(s > e) return -1;
      int mid = s+e/2;
      if(nums[mid] == key)
        return mid;
      if(nums[s] == key)
        return s;
      if(nums[e] == key)
        return e;
      if(nums[mid] < key)
        return searchIndex(nums,++mid,e,key);
      if(nums[mid] > key)
        return searchIndex(nums,s,--mid,key);
      return 0;
    }
    int search(vector<int> nums, int target) {
        int start {0},end{nums.size()-1};
      if(nums[start] > target && nums[end] < target)  
        return -1;
      return searchIndex(nums,start,end,target);
    }
};