#include<bits/stdc++.h>
using namespace std;

int goodArray(int n, vector<int> &a) {
    int ans = 0;
    for(int i=1;i<n;i++) {
        if(a[i-1]%2 == a[i]%2) {
            ans++;
        }
    }
    return ans;
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
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        cout << goodArray(n,a) << endl;
    }

    return 0;
}
