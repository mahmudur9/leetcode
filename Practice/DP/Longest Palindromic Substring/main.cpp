
#include<iostream>

using namespace std;


 // // Difficulty medium
int expandAroundCenter(string s, int left, int right) {
    int L = left, R = right;
    while (L >= 0 && R < s.length() && s[L] == s[R]) {
        L--;
        R++;
    }
    return R - L - 1;
}

int main() {

    string s;
    cin>>s;
    int start = 0, end = 0;
    for (int i = 0; i < s.length(); ++i) {
        int len1 = expandAroundCenter(s, i, i);
        int len2 = expandAroundCenter(s, i, i + 1);
        int len = max(len1, len2);
        if (len > end - start) {
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }
    string longest = "";
    for (int j = start; j < end + 1; ++j) {
        longest += s[j];
    }
    cout<<longest<<endl;

    return 0;
}

