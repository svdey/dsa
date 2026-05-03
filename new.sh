#!/bin/bash

if [ "$#" -ne 2 ]; then
    echo "Usage: ./new.sh <topic> \"<problem_name>\""
    echo "Example: ./new.sh arrays \"Two Sum\""
    exit 1
fi

TOPIC=$1
PROBLEM_NAME=$2

# Convert problem name to snake_case for filename
FILE_NAME=$(echo "$PROBLEM_NAME" | tr '[:upper:]' '[:lower:]' | sed 's/ /_/g').cpp

# Create directory if it doesn't exist
mkdir -p "$TOPIC"

FILE_PATH="$TOPIC/$FILE_NAME"

if [ -f "$FILE_PATH" ]; then
    echo "Error: File $FILE_PATH already exists!"
    exit 1
fi

# Write boilerplate to file
cat <<EOF > "$FILE_PATH"
#include "../customHeaders/catch.hpp"
#include "../customHeaders/utils.hpp"
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    // TODO: Implement solution
};

TEST_CASE("$PROBLEM_NAME") {
    Solution sol;
    
    // REQUIRE(sol.function() == expected);
}
EOF

echo "Created $FILE_PATH"
