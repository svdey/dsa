#include "../customHeaders/catch.hpp"
#include "../customHeaders/utils.hpp"
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iostream>

using namespace std;

/*
 * PROBLEM: Longest Substring Without Repeating Characters
 * PATTERN: Sliding Window (Optimized with Array)
 * 
 * LOGIC:
 * - We use two pointers: `i` (start of window) and `j` (end of window).
 * - A vector `m` of size 128 (for all ASCII characters) stores the *last seen index* of each character.
 * - As `j` iterates through the string, if we've seen the character `s[j]` before (i.e., `m[s[j]] != -1`), 
 *   we move our start pointer `i` directly to the right of the last seen index `m[s[j]] + 1`.
 * - We use `max()` for `i` to ensure the start pointer never moves backwards.
 * - At each step, we calculate the max window size `ans = max(ans, j - i + 1)`.
 * - Finally, we update the character's last seen index in our array: `m[s[j]] = j`.
 * 
 * TIME COMPLEXITY: O(N) - `j` iterates through the string exactly once.
 * SPACE COMPLEXITY: O(1) - The array `m` always uses exactly 128 integer spaces, regardless of string size.
 */
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // `m` stores the last seen index of each character (ASCII values as keys)
        // Initialize with -1 to indicate no character has been seen yet
        vector<int> m(128, -1);
        int ans = 0; // Stores the maximum length found so far
        
        // `i` is the start pointer of the window
        // `j` is the end pointer of the window (iterates through the string)
        for(int i = 0, j = 0; j < s.size(); j++){
          
          // If the current character `s[j]` has been seen before...
          // `m[s[j]]` will be >= 0.
          // We update `i` to be the maximum of its current value and `m[s[j]] + 1`.
          // This effectively slides the window's start (`i`) to the right, 
          // past the previous occurrence of the repeating character.
          if(m[s[j]] != -1) i = max(i,m[s[j]] + 1);
          
          // Calculate the current window size `j - i + 1` and update `ans` 
          // if the current window is larger.
          ans = max(ans,j - i + 1);
          
          // Update the last seen index of the current character `s[j]` to `j`.
          m[s[j]] = j;
        }
        return ans;
    }
};

TEST_CASE("3 longest substring without repeating characters") {
    Solution sol;
    
    // Example 1
    REQUIRE(sol.lengthOfLongestSubstring("abcabcbb") == 3);
    
    // Example 2
    REQUIRE(sol.lengthOfLongestSubstring("bbbbb") == 1);
    
    // Example 3
    REQUIRE(sol.lengthOfLongestSubstring("pwwkew") == 3);
    
    // Extra edge case
    REQUIRE(sol.lengthOfLongestSubstring("") == 0);
}
