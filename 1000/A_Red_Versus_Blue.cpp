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
    int n,r,b;
    cin >> n >> r >> b;
    int slots = b+1;
    int k = r/slots;
    int extra = r%slots;
    int countB = 0;
    // cout << slots << " " << k << " " << extra << " \n";
    // for(int i=0;i<extra;i++) {
    //     cout << "R";
    // }
    for(int i=0;i<slots;i++) {
        int countR = k + (i<extra ? 1 : 0);
        
        cout << string(countR,'R');
        if(i != slots-1) cout << "B";
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