#include<bits/stdc++.h>
using namespace std;

int extremelyRound(int n) {
    string s = to_string(n);
    int digi = s.size() - 1;
    return (9 * digi) + (s[0] - '0');
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
    
        cout << extremelyRound(n) << endl;
    }

    return 0;
}
