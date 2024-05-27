#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int reversePointer = numbers.size() - 1;
        vector<int> result;
        while (start < reversePointer) {
            if (numbers[start] + numbers[reversePointer] == target) {
                result.push_back(start + 1);
                result.push_back(reversePointer + 1);
                return result;
            }
            else if (numbers[start] + numbers[reversePointer] > target) {
                reversePointer--;
            }
            else {
                start++;
            }
        }
        return result;
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
