#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int> prices) {
        if(prices.size() == 0) return 0;

      int ans{0};
      int start{prices[0]},end{prices[0]};
      for(auto a : prices){
        if(a<start){
          ans = max(ans,end-start);
          start = a; end = a;
        }  else  end = max(end,a);
      }
      return max(ans,end-start);
    }
};