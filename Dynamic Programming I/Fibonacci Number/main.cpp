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
int fib(int n) {
    if (n <= 1) {
        return n;
    }
    if (dp[n] != 0) {
        return dp[n];
    }
    dp[n] = fib(n - 1) + fib(n - 2);
    return dp[n];
}

int main() {

    cout<<fib(4)<<endl;

    return 0;
}

