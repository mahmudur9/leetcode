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

int main() {

//    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
//    vector<int> arr = {5,4,-1,7,8};
    vector<int> arr = {-2, -1};
    cout<<maxSubArray(arr)<<endl;

    return 0;
}

