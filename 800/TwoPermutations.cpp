#include<bits/stdc++.h>
using namespace std;



bool twoPermutate(int n, int a, int b) {
    if(a==b && b==n) return true;
    if(n==1) return true;
    if(n==2) {
        if((a==2 && b==2) || (a==0 && b==0)) return true;
        return false;
    }
    if(n==3) {
        if((a==3 && b==3) || (a==0 && b==0)) return true;
    }
    
    if((a+b+1) >= n) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n,a,b;
        cin >> n >> a >> b;
        if(twoPermutate(n,a,b)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        
    }

    return 0;
}
