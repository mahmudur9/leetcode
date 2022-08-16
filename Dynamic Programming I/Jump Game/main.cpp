#include<iostream>
#include <vector>
#include<algorithm>

using namespace std;

bool canJump(vector<int>& nums) {
    int n = nums.size();
    int reachable = 0;
    for (int i = 0; i < n; ++i) {
        if (reachable < i) {
            return false;
        }
        reachable = max(reachable, i + nums[i]);
    }

    return true;
}

int main() {

    vector<int> arr = {3,2,1,0,4};
    if (canJump(arr)) {
        cout<<"true"<<endl;
    }
    else {
        cout<<"false"<<endl;
    }

    return 0;
}

