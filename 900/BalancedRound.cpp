#include<bits/stdc++.h>
using namespace std;

int balanced(int n, int k, vector<int> &a) {
    sort(a.begin(), a.end());
    int count = 1;
    int ans = 1;
    for(int i=1;i<n;i++) {
        cout << a[i] << " " << a[i]-a[i-1] << " " << i << endl;
        if((a[i]-a[i-1]) > k) {
            count = 1;
        } else {
            count += 1;
            ans = max(ans, count);
        }
    }
    return n - ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        cout << balanced(n,k,a) << endl;
    }
    return 0;
}