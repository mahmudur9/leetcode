#include<iostream>
#include <vector>
#include<algorithm>

using namespace std;

int jump(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    int currentReach = 0;
    int currentMax = 0;

    for (int i = 0; i < n - 1; ++i) {
        if (nums[i] + i > currentMax) {
            currentMax = nums[i] + i;
        }
        if (i == currentReach) {
            count++;
            currentReach = currentMax;
        }
    }
    return count;
}

int main() {

    vector<int> arr = {2,3,1,1,4};
    cout<<jump(arr)<<endl;

    return 0;
}

