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

int solve(vector<int> nums) {
    if (nums.size() == 0) {
        return 0;
    }
    else if (nums.size() == 1) {
        return nums[0];
    }
    else if (nums.size() == 2) {
        return max(nums[0], nums[1]);
    }

    int dp[nums.size()];
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < nums.size(); i++) {
        dp[i] = max(nums[i] + dp[i - 2], dp[i - 1]);
    }

    return dp[nums.size() - 1];
}

int rob(vector<int>& nums) {
    if (nums.size() == 0) {
        return 0;
    }
    else if (nums.size() == 1) {
        return nums[0];
    }
    return max(solve(vector<int>(nums.begin(), nums.end() - 1)), solve(vector<int>(nums.begin() + 1, nums.end())));
}

int main() {

    vector<int> arr = {2,3,2};

    cout<<rob(arr)<<endl;

    return 0;
}

