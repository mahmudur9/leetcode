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

int dp[1000];
int climbStairs(int n) {
    if (n == 0) {
        return 1;
    }
    if (n <= 2) {
        return n;
    }
    if (dp[n] != 0) {
        return dp[n];
    }
    dp[n] = climbStairs(n - 1) + climbStairs(n - 2);
    return dp[n];
}

int main() {

    cout<<climbStairs(3)<<endl;

    return 0;
}

