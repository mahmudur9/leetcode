
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

// Wrong solution
int minPathSum(vector<vector<int>>& grid) {
    if (grid.size() == 0) {
        return 0;
    }
    int dp[grid.size()][grid[0].size()];
    for (int i = 0; i < sizeof(dp) / sizeof(dp[0]); ++i) {
        for (int j = 0; j < sizeof(dp[i]) / sizeof(dp[i][0]); ++j) {
            dp[i][j] += dp[i][j];
            if (i > 0 && j > 0) {
                dp[i][j] += min(dp[i - 1][j], dp[i][j - 1]);
            }
            else if (i > 0) {
                dp[i][j] += dp[i - 1][j];
            }
            else if (j > 0) {
                dp[i][j] += dp[i][j - 1];
            }
        }
    }
    return dp[(sizeof(dp) / sizeof(dp[0]) - 1)][(sizeof(dp[0]) / sizeof(dp[0][0])) - 1];
}

int main() {
//    vector<vector<int>> cost = { { 1, 2, 3 },{ 4, 8, 2 },{ 1, 5, 3 } };
    vector<vector<int>> cost = { { 1, 2, 3 },{ 4,5,6 }};
    cout<<minPathSum(cost)<<endl;

    return 0;
}

