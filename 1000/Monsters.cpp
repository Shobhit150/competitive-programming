#include<bits/stdc++.h>
using namespace std;

long long olyaandgamewitharrays(int n, vector<vector<int>> &a) {
    int miniIdx = 0;
    int miniFirst = 0;
    for(int i=0;i<n;i++) {
        if(a[i][1] < a[miniIdx][1]) {
            miniIdx = i;
        }
        // cout << "-->> " << miniFirst << " " << a[i][0] << " " << a[i][miniFirst] << endl;
        if(a[i][0] < a[miniFirst][0]) {
            miniFirst = i;
        }
    }
    // cout << "miniIdx " << miniIdx << endl;
    // cout << "miniFirst " << miniFirst << endl;
    long long ans = 0;
    for(int i=0;i<n;i++) {
        if(i == miniIdx) {
            ans += a[miniFirst][0];
        } else {
            ans += a[i][1];
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
        vector<vector<int>> a(n);
        for(int i=0;i<n;i++) {
            int m;
            cin >> m;
            vector<int> b(m);
            for(int j=0;j<m;j++) {
                cin >> b[j];
            }
            sort(b.begin(), b.end());
            a[i] = b;

        }
        cout << olyaandgamewitharrays(n,a) << "\n";

    }
    return 0;
}