#include<bits/stdc++.h>
using namespace std;

bool halloumi(int n, int k, vector<long long> &a) {
    bool flag = true;
    for(int i=1;i<a.size();i++) {
        if(a[i-1] > a[i]) flag = false;
    }
    if(flag) return true;
    if(k>=2) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(halloumi(n,k,a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        
    }

    return 0;
}
