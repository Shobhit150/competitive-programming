#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

ll mod_add(ll a, ll b) { return (a % MOD + b % MOD) % MOD; }
ll mod_sub(ll a, ll b) { return (a % MOD - b % MOD + MOD) % MOD; }
ll mod_mul(ll a, ll b) { return (a % MOD * b % MOD) % MOD; }

void solve() {
    int n,k;
    string s;
    cin >> n >> k;
    cin >> s;

    int countW = 0;
    int j = 0;
    int mini = INT_MAX;
    for(int i=0;i<n;i++) {
        if(s[i] == 'W') {
            countW++;
        }
        int len = i-j+1;
        if(len > k) {
            
            if(s[j] == 'W') countW--;
            j++;
        }
        if(len == k) mini = min(mini, countW);
        // cout << (i-j+1) << " " << k << " " << countW << "\n";
    }
    cout << mini << "\n";
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