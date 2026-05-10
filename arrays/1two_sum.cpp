#include "../customHeaders/catch.hpp"
#include "../customHeaders/utils.hpp"
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

/*
 * PROBLEM: Two Sum
 * PATTERN: Hashing (Hash Map)
 *
 * LOGIC:
 * - We need to find two numbers that add up to `target`.
 * - Instead of a nested loop (O(N^2)), we use an unordered_map to keep track of
 * numbers we've seen.
 * - For each number, we calculate its `complement` (target - current_number).
 * - If the complement is already in our map, we've found our pair!
 * - If not, we store the current number and its index in the map for future
 * numbers to check against.
 *
 * TIME COMPLEXITY: O(N) - We only traverse the array once. Hash map lookups are
 * O(1). SPACE COMPLEXITY: O(N) - In the worst case, we might store all N
 * elements in the map.
 */
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++) {
      int complement = target - nums[i];
      if (m.count(complement)) {
        return {m[complement], i};
      }
      m[nums[i]] = i;
    }
    return {};
  }
};

TEST_CASE("Two Sum") {
  Solution sol;
  vector<int> nums = {2, 7, 11, 15};
  vector<int> expected = {0, 1};
  REQUIRE(sol.twoSum(nums, 9) == expected);
}

TEST_CASE("Two Sum1") {
  Solution sol;
  vector<int> nums = {3, 2, 4};
  vector<int> expected = {1, 2};
  REQUIRE(sol.twoSum(nums, 6) == expected);
}

TEST_CASE("Two Sum2") {
  Solution sol;
  vector<int> nums = {3, 3};
  vector<int> expected = {0, 1};
  REQUIRE(sol.twoSum(nums, 6) == expected);
}
