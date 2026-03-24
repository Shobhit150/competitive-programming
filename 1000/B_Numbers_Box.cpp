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
    int n,m;
    cin >> n >> m;

    int negtaiveCount = 0;
    int negativeLargestNumber = INT_MAX;
    int sumi = 0;

    vector<vector<int>> mat(n, vector<int>(m, 0));

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> mat[i][j];
            sumi += abs(mat[i][j]);
            if(mat[i][j] < 0) {
                negtaiveCount++;
            }
            negativeLargestNumber = min(negativeLargestNumber, abs(mat[i][j]));
        }
    }
    // cout << negtaiveCount << " " << negativeLargestNumber << " " << sumi << "\n";
    if(negtaiveCount%2 == 0) {
        cout << sumi << "\n";
    } else {
        cout << sumi - (2*negativeLargestNumber) << "\n";
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