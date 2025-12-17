#include<bits/stdc++.h>
using namespace std;

int cover(int n, vector<char> &a) {
    int ans = 0;
    int seqOfOnes = 0;
    int ones = 0;
    for(int i=0;i<n;i++) {
        if(a[i] == '.') {
            ones++;
            seqOfOnes++;
        }
        if(a[i] == '#') {
            seqOfOnes = 0;
        }
        if(seqOfOnes >= 3) {
            return 2;
        }
    }
    return ones;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<char> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << cover(n,a) << endl;

        
    }

    return 0;
}
