#include <iostream>
#include <vector>
#include <climits> // for INT_MIN
using namespace std;

int maxSubArraySum(vector<int>& nums) {
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < nums.size(); ++i) {
        currSum += nums[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0) {
            currSum = 0;
        }
    }

    return maxSum;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int result = maxSubArraySum(nums);
    cout << result << endl;

    return 0;
}