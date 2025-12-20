#include <bits/stdc++.h>
using namespace std;


int united(int n, vector<int> &a, vector<int> &b, vector<int> &c) {
    int maxi = a[0];
    bool isAllSame = true;

    for(int i=1;i<n;i++) {
        if(a[i] != maxi) {
            isAllSame = false;
        }
        maxi = max(maxi, a[i]);
    }
    if(isAllSame) return -1;
    for(int i=0;i<n;i++) {
        if(a[i] == maxi) {
            c.push_back(maxi);
        } else {
            b.push_back(a[i]);
        }
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        vector<int> b;
        vector<int> c;
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        if(united(n, a, b, c) == -1) {
            cout << -1 << endl;
        } else{
            cout << b.size() << " " << c.size() << endl;
            for(int i=0;i<b.size();i++) {
                cout << b[i] << " ";
            }
            cout << endl;
            for(int i=0;i<c.size();i++) {
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}