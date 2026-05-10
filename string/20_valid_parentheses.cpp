#include "../customHeaders/catch.hpp"
#include <stack>
#include <string>

using namespace std;

/*
 * PROBLEM: Valid Parentheses
 * PATTERN: Stack
 * LOGIC:
 * - We use a stack to keep track of the opening brackets.
 * - When we encounter an opening bracket, we push it onto the stack.
 * - When we encounter a closing bracket, we check if the stack is empty or if
 * the top of the stack is the corresponding opening bracket.
 * - If it is, we pop the stack. Otherwise, we return false.
 * - Finally, if the stack is empty, we return true.
 *
 * TIME COMPLEXITY: O(n) - We iterate through the string once.
 * SPACE COMPLEXITY: O(n) - In the worst case, the stack can store all
 * characters of the string.
 */
class Solution {
public:
  bool isValid(string s) {
    stack<char> st;
    for (char c : s) {
      if (c == '(' || c == '{' || c == '[') {
        st.push(c);
      } else {
        if (st.empty())
          return false;
        if ((st.top() == '(' && c == ')') || (st.top() == '{' && c == '}') ||
            (st.top() == '[' && c == ']'))
          st.pop();
        else
          return false;
      }
    }
    return st.empty();
  }
};

TEST_CASE("Valid Parentheses") {
  Solution sol;

  SECTION("Example 1") { REQUIRE(sol.isValid("()") == true); }

  SECTION("Example 2") { REQUIRE(sol.isValid("()[]{}") == true); }

  SECTION("Example 3") { REQUIRE(sol.isValid("(]") == false); }

  SECTION("Example 4") { REQUIRE(sol.isValid("([])") == true); }

  SECTION("Example 5") { REQUIRE(sol.isValid("([)]") == false); }
  SECTION("Example 6") { REQUIRE(sol.isValid("(])") == false); }
}
