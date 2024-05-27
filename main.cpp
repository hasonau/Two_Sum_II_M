#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(const vector<int>& numbers, int target) {
        int start = 0;
        int end = numbers.size() - 1;

        while (start < end) {
            int sum = numbers[start] + numbers[end];
            if (sum == target) {
                // Return 1-based indices as required
                return {start + 1, end + 1};
            } else if (sum > target) {
                end--;
            } else {
                start++;
            }
        }
        // Return an empty vector if no solution is found
        return {};
    }
};

int main() {
    Solution solution;

    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = solution.twoSum(numbers, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two numbers sum up to the target." << endl;
    }

    return 0;
}
