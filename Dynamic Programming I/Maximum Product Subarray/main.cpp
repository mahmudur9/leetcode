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


// TLE
//int dp[100000000];
//int maxProduct(vector<int>& nums) {
//    int n = nums.size() - 1;
//    int i = 0;
//    int index = 0;
//    int j = 0;
//    int maxProduct = nums[0];
//    while (index <= n) {
//        if (index == i) {
//            dp[j] = nums[i];
//        }
//        else if (index != i) {
//            dp[j] = dp[j - 1] * nums[i];
//        }
//
//        if (dp[j] > maxProduct) {
//            maxProduct = dp[j];
//        }
//
//        if (i == n) {
//            index++;
//            i = index;
//            j++;
//            continue;
//        }
//        i++;
//        j++;
//    }
//
//    return maxProduct;
//}

// Important for interviews
int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int result = nums[0];
    int currentMin = nums[0];
    int currentMax = nums[0];

    for (int i = 1; i < n; ++i) {
        int previousMax = currentMax;
        currentMax = max(nums[i], max(currentMax * nums[i], currentMin * nums[i]));
        currentMin = min(nums[i], min(previousMax * nums[i], currentMin * nums[i]));
        result = max(result, currentMax);
    }

    return result;
}

int main() {

//    vector<int> arr = {-2};
    vector<int> arr = {-3, -1, -1};
    cout<<maxProduct(arr)<<endl;

    return 0;
}
