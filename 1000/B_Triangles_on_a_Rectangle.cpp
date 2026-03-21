#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

ll mod_add(ll a, ll b) { return (a % MOD + b % MOD) % MOD; }
ll mod_sub(ll a, ll b) { return (a % MOD - b % MOD + MOD) % MOD; }
ll mod_mul(ll a, ll b) { return (a % MOD * b % MOD) % MOD; }

void solve() {
    int w,h;
    cin >> w >> h;
    vector<vector<int>> s(4);
    for(int i=0;i<4;i++) {
        int n;
        cin >> n;
        vector<int> temp(n);
        for(int j=0;j<n;j++) {
            cin >> temp[j];
        }
        s[i] = temp;
    }
    ll ans = 0;

    for(int i=0;i<2;i++) {
        ll area = (s[i].back() - s[i].front())*1LL*h;
        ans = max(ans,area);
    }
    for(int i=2;i<4;i++) {
        ll area = (s[i].back() - s[i].front())*1LL*w;
        ans = max(ans,area);
    }
    cout << ans << "\n";
}

int main() {
    fastio

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}