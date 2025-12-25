#include<bits/stdc++.h>
using namespace std;

int oddQueries(int n, int k, vector<int> &a, vector<vector<int>> &b) {
    vector<int> pre;
    pre.push_back(0);
    int preSum = 0;
    for(int i=0;i<n;i++) {
        preSum += a[i];
        pre.push_back(preSum);
    }
    for(int i=0;i<n;i++) {
        cout << " here -> " << pre[i] << " ";
    }
    return -1;
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
        for(int i=0;i<n;i++ ){
            cin >> a[i];
        }
        vector<vector<int>> b(k, vector<int>(3));
        for(int i=0;i<k;i++) {
            for(int j=0;j<3;j++) {
                cin >> b[i][j];
            }
        }
        cout << oddQueries(n,k,a,b) << endl;

    }
    return 0;
}
