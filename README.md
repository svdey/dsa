# DSA Practice 🚀

This repository contains my Data Structures & Algorithms practice for interview preparation.

---

## 📚 Topics Covered

- Arrays
- String
- Hashing
- Sliding Window
- Linked List
- Stack & Queue
- Trees
- Graphs

---

## 📊 Progress

| Topic | Problems |
|------|---------|
| Arrays | 1 |
| String | 1 |
| Hashing | 1 |
| Sliding Window | 1 |

---

## 🧠 Problems Solved

### Arrays / Hashing
- [Two Sum](./arrays/1two_sum.cpp)

### String / Sliding Window
- [Longest Substring Without Repeating Characters](./string/3_longest_substring_without_repeating_characters.cpp)

---

## ⚙️ Approach

- Focus on **patterns**, not random problems  
- Write **clean and optimized solutions**  
- Add **time & space complexity** for each problem  
- Maintain structured folders  

---

## 🎯 Goal

- Solve **100+ problems**
- Master core interview patterns
- Be ready for product-based company interviews

---

## 📂 Structure & Workflow

This workspace uses an automated testing setup with **Catch2** to easily verify solutions.

### 1. Creating a New Problem
Use the provided script to instantly generate the folder, boilerplate code, and test case structure:
```bash
./new.sh <topic_name> "<Problem Name>"
# Example: ./new.sh arrays "Two Sum"
```

### 2. Writing the Solution
The generated file will contain a `Solution` class and a Catch2 `TEST_CASE`. Implement your logic inside the `Solution` class and add your assertions in the test block:
```cpp
TEST_CASE("Two Sum") {
    Solution sol;
    REQUIRE(sol.twoSum({2, 7, 11, 15}, 9) == std::vector<int>{0, 1});
}
```

### 3. Running Tests
To compile and run tests for a specific problem file, use the Makefile:
```bash
make test FILE=topic_name/problem_name.cpp
# Example: make test FILE=arrays/two_sum.cpp
```

*Note: Utilities for working with Linked Lists and Trees are available in `customHeaders/utils.hpp`.*
