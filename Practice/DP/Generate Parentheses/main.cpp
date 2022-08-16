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

vector<string> valid;

// Using Recursion and backtracking
void generate(string& s, int open, int close) {
    // base case
    if (open == 0 && close == 0) {
        valid.push_back(s);
        return;
    }
    if (open > 0) {
        s += '(';
        generate(s, open - 1, close);
        s.pop_back();
    }
    if (close > 0) {
        if (open < close) {
            s += ')';
            generate(s, open, close - 1);
            s.pop_back();
        }
    }
}

// Difficulty medium
int main() {

    int n;
    cin>>n;
    string s = "";
    generate(s, n, n);
    for (const auto & i : valid) {
        cout<<i;
    }

    return 0;
}

