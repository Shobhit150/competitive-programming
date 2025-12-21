#include<bits/stdc++.h>
using namespace std;

bool makeItBeautiful(int n, vector<int> &a, vector<int> &ans) {
    int mini = min(a[0], a[1]);
    int maxi = max(a[0], a[1]);
    for(int i=2;i<n;i++) {
        mini = min(a[i], mini);
        maxi = max(a[i], maxi);
    }

    if(mini == maxi) return false;
    ans.push_back(maxi);
    for(int i=0;i<n-1;i++) {
        ans.push_back(a[i]);
    }
    return true;
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
        vector<int> ans;
        if(makeItBeautiful(n,a, ans)) {
            cout << "Yes" << endl;
            for(int i=0;i<n;i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
