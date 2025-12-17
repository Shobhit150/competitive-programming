#include<bits/stdc++.h>
using namespace std;

int linetrip(int n, int k, vector<int> &a) {
    int maxi = 0;
    int prev = 0;
    for(int& num: a) {
        maxi = max(maxi, num-prev);
        prev = num;
    }
    maxi = max(maxi, 2 * (k-prev));
    return maxi;
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << linetrip(n,k,a) << endl;

        
    }

    return 0;
}
