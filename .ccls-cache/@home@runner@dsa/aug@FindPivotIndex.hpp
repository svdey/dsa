#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int> nums) {
      const int n = nums.size();
      if(n <= 2) return -1;
        vector<int> left(n);
        vector<int> right(n);
      left [0] = nums[0];
      right[n-1] = nums[n-1];
      for(int i = 0;i < n;i++)
        left[i] = left[i-1] + nums[i];
      for(int i = n-1;i >=0;i--)
        right[i] = right[i+1] + nums[i];
      for(int i = 1; i < n;i++)
        if(left[i-1] == right[i+1])
          return i;
      return -1;
    }
};