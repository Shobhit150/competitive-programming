#include<bits/stdc++.h>
using namespace std;

void makeItIncreasing(int n, vector<long long> &a) {
    if(n==1) {
        cout << 0 << endl;
        return;
    }
    int count = 0;
    for(int i=n-2; i>=0; i--) {
        if(a[i+1] == 0) {
            cout << -1 << endl;
            return;
        }
        while(a[i] >= a[i+1]) {
            a[i] = a[i]/2;
            count++;
        }
    }
    cout << count << endl;
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
        makeItIncreasing(n,a);

    }
    return 0;
}
