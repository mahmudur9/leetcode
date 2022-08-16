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


int deleteAndEarn(vector<int>& nums) {
    int maxElement = *max_element(nums.begin(), nums.end());
    int dp[10005];
    vector<int> frequency(10005);
    for (auto i : nums) {
        frequency[i]++;
    }

    dp[1] = frequency[1];
    dp[2] = max(dp[1], frequency[2] * 2);

    for (int j = 3; j <= maxElement; ++j) {
        dp[j] = max(dp[j - 1], dp[j - 2] + frequency[j] * j);
    }

    return dp[maxElement];
}

int main() {

    vector<int> arr = {2,3,3,5,6,6};
    cout<<deleteAndEarn(arr)<<endl;

    return 0;
}

