#include<bits/stdc++.h>
using namespace std;

int permuationSwap(int n, vector<int> &s) {

    int maxi = 0;
    for(int i=0;i<n;i++) {
        if(s[i]-1 - i == 0) continue;
        maxi = __gcd(maxi, abs(s[i]-1 - i));
    }
    return maxi;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++ ){
            cin >> a[i];
        }
        cout << permuationSwap(n,a) << endl;

    }
    return 0;
}
