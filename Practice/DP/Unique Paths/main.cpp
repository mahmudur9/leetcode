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

// Difficulty medium
// Using dynamic programming Tabulation or Top Down approach
int uniquePaths(int m, int n) {
    int dp[m][n];
    // for value checking
    int value = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || j == 0) {
                dp[i][j] = 1;
            }
            else {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                // for value checking
                value = dp[i][j];
            }
        }
    }
    return dp[m - 1][n - 1];
}

// Recursive approach using memoization
int memo[100][100];
int recur(int m, int n) {
    if (m == 1 || n == 1)
        return 1;
    if (memo[m][n] != -1) {
        return memo[m][n];
    }
    memo[m][n] = recur(m - 1, n) + recur(m, n - 1);
    int result = memo[m][n];
    return result;
}

int main() {

    int m, n;
    cin>>m;
    cin>>n;

    for (auto & i : memo) {
        for (int & j : i) {
            j = -1;
        }
    }
    // DP
//    cout<<uniquePaths(m, n)<<endl;
    // Recursive
    cout<<recur(m, n)<<endl;

    return 0;
}

