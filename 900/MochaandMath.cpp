#include <iostream>
#include <vector>
#include <climits>
#include <math.h>
using namespace std;

long long mocha(int n, vector<long long> &a) {
    int mini = INT_MAX;
    for(int i=0;i<n;i++) {
        mini = min<long long>(mini, a[i]);
    }
    int count = 0;
    int ans = 0;
    while(mini) {
        
        int curr = 1;
        for(int i=0;i<n;i++) {
            curr = min<long long>(curr, a[i]%2);
            a[i] = a[i] >> 1;
        }
        if(curr == 1) {
            ans += pow(2, count);
        }
        count++;
        mini = mini >> 1;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }

        cout << mocha(n,a) << endl;
    }

    return 0;
}