#include<bits/stdc++.h>
using namespace std;

void arrayCloning(int n, vector<long long> &a) {
    map<long long, int> frq;
    for(long long &num: a) {
        frq[num]++;
    }
    long long maxi = LLONG_MIN;
    for(auto [num, freq]: frq) {
        maxi = max<long long>(maxi, freq);
    }
    int count = 0;
    while(maxi < n) {
        count++;
        if(maxi * 2 <= n) {
            count += (maxi);
            maxi = maxi * 2;
        } else {
            count += (n - maxi);
            maxi = n;
        }
    }
    cout << count << endl;



    // cout << (n - maxi) + ceil(log2l(n/maxi)) << endl;
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
        arrayCloning(n, a);
    }

    return 0;
}
