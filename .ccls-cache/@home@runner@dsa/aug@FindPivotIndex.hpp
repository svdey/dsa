#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int> nums) {
      
      //  counting the Total Sum of the Array
      int totalSum = accumulate(nums.begin(),nums.end(),0);
      int leftSum{0};
      for(int i = 0; i < nums.size(); i++){
        totalSum -= nums[i];
        if(leftSum == totalSum) return i;
        leftSum += nums[i];
      }
      return -1;
    }
};