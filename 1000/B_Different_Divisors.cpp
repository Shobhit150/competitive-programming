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

vector<bool> prime;

void sieveOfEratosthenes(int N) {
    prime.resize(N+1, true);
    prime[0] = false;
    prime[1] = false;
    for(int i=2;i*i<=N;i++) {
        if(prime[i]) {
            for(int j=i*i;j<=N;j+=i) {
                prime[j] = false;
            }
        }
    }
}

void solve() {
    int d;
    cin >> d;

    int p = d+1;
    while(!prime[p]) {
        p++;
    }
    int q = p+d;
    while(!prime[q]) {
        q++;
    }

    cout << min(1LL*p*p*p, 1LL*p*q) << "\n";

}

int main() {
    fastio

    int t = 1;
    cin >> t;
    sieveOfEratosthenes(25000);

    while (t--) {
        solve();
    }

    return 0;
}