#include<bits/stdc++.h>
using namespace std;

long long luntik(int n, vector<long long> &a) {
    int ones = 0;
    int zeros = 0;
    for(int i=0;i<n;i++) {
        if(a[i] == 1) {
            ones++;
        }
        if(a[i] == 0) {
            zeros++;
        }
    }
    if(ones == 0) {
        return 0;
    }
    return pow(2, zeros)*ones;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }

        cout << luntik(n,a) << endl;
    }

    return 0;
}