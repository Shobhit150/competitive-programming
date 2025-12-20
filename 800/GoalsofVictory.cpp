#include<bits/stdc++.h>
using namespace std;

int goal(int n, vector<int> &a) {
    int summ = 0;
    for(int i=0;i<n-1;i++) {
        summ += a[i];
    }
    return -1 * summ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n-1);
        for (int i = 0; i < n-1; i++) {
            cin >> a[i];
        }
        cout << (goal(n,a)) <<endl;

        
    }

    return 0;
}
