#include<bits/stdc++.h>
using namespace std;

bool jagged(int n, vector<int> &a) {
    if(a[0] == 1) return true;
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(jagged(n,a)) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
