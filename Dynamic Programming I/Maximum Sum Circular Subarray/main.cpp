#include<iostream>
#include <vector>
#include<algorithm>
#include <array>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>

using namespace std;
// Kadane's Algorithm
int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = 0;
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        currentSum += nums[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;
}

int maxSubarraySumCircular(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) {
        return 0;
    }
    int x = maxSubArray(nums);
    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        totalSum += nums[i];
        // Make the value of its opposite
        nums[i] *= -1;
    }
    int z = maxSubArray(nums);
    if (totalSum + z == 0) {
        return x;
    }

    return max(x, totalSum + z);
}

int main() {

//    vector<int> arr = {1,-2,3,-2};
    vector<int> arr = {5,-3,5};
    cout<<maxSubarraySumCircular(arr)<<endl;

    return 0;
}

