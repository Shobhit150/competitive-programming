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

int lcs(string &a, string &b) {
    int m = a.size();
    int n = b.size();
    vector<vector<int>> dp(m+1, vector<int>(n+1));
    int ans = 0;
    int endIndex = 0;

    for(int i=1;i<=m;i++) {
        for(int j=1;j<=n;j++) {
            if(a[i-1] == b[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
                if(dp[i][j] > ans) {
                    ans = dp[i][j];
                    endIndex = i;
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }
    return ans;
}

void solve() {
    string a, b;
    cin >> a;
    cin >> b;

    int m = a.size();
    int n = b.size();

    cout << m + n - (2*lcs(a,b)) << "\n";
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