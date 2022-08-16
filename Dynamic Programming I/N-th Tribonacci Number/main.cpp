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

// Solved by myself
int dp[1000];
int tribonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n < 3) {
        return 1;
    }
//    else if (n == 3) {
//        return 2;
//    }
    if (dp[n] != 0) {
        return dp[n];
    }
    dp[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    return dp[n];
}

int main() {

    cout<<tribonacci(25)<<endl;

    return 0;
}

