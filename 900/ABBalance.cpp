#include<bits/stdc++.h>
using namespace std;

void abBalance(string &s) {
    int n = s.size();
    s[n-1] = s[0];
    cout << s << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        abBalance(s);
    }

    return 0;
}
