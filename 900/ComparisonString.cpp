#include<bits/stdc++.h>
using namespace std;

int comparison(int n, string &s) {
    int count = 1;
    int ans = 1;
    for(int i=1;i<n;i++) {
        if(s[i] == s[i-1]) {
            count += 1;
            ans = max(ans, count);
        } else {
            count = 1;
        }
    }
    return ans + 1;
    
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
        cout << comparison(n,s) << endl;

    }
    return 0;
}
