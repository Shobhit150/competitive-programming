#include<bits/stdc++.h>
using namespace std;



bool serval(int n, vector<int> &a) {
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(__gcd(a[i], a[j]) <= 2) return true;
        }
    }
    return false;
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
        

        if(serval(n,a)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
