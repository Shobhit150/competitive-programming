#include<bits/stdc++.h>
using namespace std;

int oneTwo(int n, vector<int> &a) {
    int count = 0;
    for(int &x: a) {
        if(x%2==0) count++;
    }
    
    if(count%2==1) return -1;
    int count2 = 0;
    for(int i=0;i<n;i++) {
        if(a[i]%2==0) count2++;
        if((count/2) == count2) return (i+1);
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        cout << oneTwo(n,a) << endl;
    }

    return 0;
}
