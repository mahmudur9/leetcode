#include<iostream>

using namespace std;

int main() {

    string s, p;
    cin>>s;
    cin>>p;

    // Difficulty hard
    // Using tabulation or bottom up approach
    // This code runs accurately in java
    bool dp[s.length() + 1][p.length() + 1];
    dp[s.length()][p.length()] = true;

    for (int i = s.length(); i >= 0; i--) {
        for (int j = p.length() - 1; j >= 0; j--) {
            bool first_match = (i < s.length() && (p[j] == s[j] || p[j] == '.'));

            if (j + 1 < p.length() && p[j + 1] == '*') {
                dp[i][j] = dp[i][j+2] || (first_match && dp[i+1][j]);
            } else {
                dp[i][j] = first_match && dp[i+1][j+1];
            }
        }
    }
    if (dp[0][0]) {
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }

    return 0;
}

