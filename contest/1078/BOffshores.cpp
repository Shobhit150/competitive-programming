#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
    ll n,x,y;
    cin >> n >> x >> y;
    vector<ll> a(n);
    ll t = 0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        t += a[i]/x;
    }
    ll ans = 0;
    for(int i=0;i<n;i++) {
        ans = max(ans, a[i] + (t - a[i]/x)*y);
    }
    cout << ans << "\n";
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