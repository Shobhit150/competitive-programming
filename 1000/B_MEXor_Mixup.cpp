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

int xorUpToN(int n) {
    if(n%4 == 0) return n;
    if(n%4 == 1) return 1;
    if(n%4 == 2) return n+1;
    return 0;
}

void solve() {
    int a,b;
    cin >> a >> b;
    int xor1 = xorUpToN(a-1);

    int xorLeft = xor1 ^ b;
    if(xorLeft == 0) {
        cout << (a) << "\n";
        return;
    }

    if(xorLeft < a) {
        cout << (a+1) << "\n";
        return;
    }
    if(xorLeft == a) {
        cout << (a+2) << "\n";
        return;
    }
    if(xorLeft > a) {
        cout << (a+1) << "\n";
        return;
    }
    



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