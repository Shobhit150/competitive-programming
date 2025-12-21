#include<bits/stdc++.h>
using namespace std;

int prepend(int n, string &s) {
    int l = 0;
    int r = n-1;
    while(r>l && ((s[l]=='1' && s[r]=='0') || (s[l]=='0' && s[r]=='1'))) {
        r--;
        l++;
    }
    
    return (r-l) +1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        cout << prepend(n,s) << endl;
    }

    return 0;
}
