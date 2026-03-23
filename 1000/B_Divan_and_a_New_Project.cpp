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
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++) {
        int b;
        cin >> b;
        a[i] = {b, i};
    }

    sort(rall(a));

    vector<int> ans(n+1);
    ans[0] = 0;
    ll time = 0;
    int pos = 1;
    for(int i=0;i<n;i++) {
        int idx = a[i].second + 1;
        if(i%2 == 0) {
            ans[idx] =  pos;
        } else {
            ans[idx] =  -pos;
            pos++;
        }
        time += (2LL * abs(ans[idx]) * a[i].first);
    }
    cout << time << "\n";
    
    for(int i=0;i<=n;i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
    

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