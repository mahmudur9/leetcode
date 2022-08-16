
#include<iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    //Time limit exit code
    //"abcdbbfcba"
    string s;
    cin>>s;
    vector<string> arr;
    for (int l = 0; l < s.length(); ++l) {
        for (int i = l; i < s.length(); ++i) {
            string temp = "";
            for (int k = l; k <= i; ++k) {
                temp += s[k];
            }
            string reverse = "";
            for (int j = temp.length() - 1; j >= 0; j--) {
                reverse += temp[j];
            }
            if (temp == reverse) {
                arr.push_back(temp);
            }
        }
    }
    string longest = arr[0];
    for (const auto & k : arr) {
        if (longest.length() < k.length()) {
            longest = k;
        }
    }
    cout<<longest<<endl;

    return 0;
}

