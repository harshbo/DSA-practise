#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSumSubarray(vector<int>& nums, int k) {
    int window_sum = 0;
    int max_sum = 0;

    // Initialize the first window sum for the first `k` elements
    for (int i = 0; i < k; i++) {
        window_sum += nums[i];
    }

    max_sum = window_sum;  // Set the initial max sum

    // Start from i = 1 and stop at nums.size() - k
    for (int i = 1; i <= nums.size() - k; i++) {
        // Slide the window: subtract the element going out and add the element coming in
        window_sum += nums[i + k - 1] - nums[i - 1];

        // Update the maximum sum if the current window sum is larger
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}

int main() {
    vector<int> nums = {2, 1, 5, 1, 3, 2};
    int k = 3;
    cout << "Maximum sum of subarray of size " << k << " is " << maxSumSubarray(nums, k) << endl;
    return 0;
}
