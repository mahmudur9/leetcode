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


int minCostClimbingStairs(vector<int>& cost) {
    int dp[cost.size()];
    dp[0] = cost[0];
    dp[1] = cost[1];
    for (int i = 2; i < cost.size(); ++i) {
        dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
    }

    return min(dp[cost.size() - 2], dp[cost.size() - 1]);
}

int main() {

//    vector<int> cost = {10,15,20};
    vector<int> cost = {1,100,1,1,1,100,1,1,100,1};
    cout<<minCostClimbingStairs(cost)<<endl;

    return 0;
}

