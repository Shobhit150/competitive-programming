#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
    int n,w;
    cin >> n >> w;
    int take = n/w;
    cout << n - take << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

     while (t--) {
        solve();
    }
    return 0;
}