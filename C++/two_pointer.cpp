#include <iostream>
#include <vector>
using namespace std;

bool twoSum(vector<int>& nums, int target) {
    int i = 0;
    int j = nums.size() - 1;

    while (i < j) {
        int sum = nums[i] + nums[j];
        if (sum == target) {
            return true;
        } else if (sum < target) {
            i++;
        } else {
            j--;
        }
    }
    return false;
}

int main() {
    vector<int> nums = {1, 2, 4, 7, 11, 15};
    int target = 15;
    if (twoSum(nums, target)) {
        cout << "Found!" << endl;
    } else {
        cout << "Not Found!" << endl;
    }
}
