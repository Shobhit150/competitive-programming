#include<bits/stdc++.h>
using namespace std;

bool makeAP(int a, int b, int c) {
    int assumeC = b + (b-a);
    if(assumeC%c == 0 && assumeC >= 1) {
        return true;
    } 
    int assumeA = b - (c-b);
    if(assumeA%a == 0 && assumeA >= 1) {
        return true;
    }
    int assumeB = (c+a)/2;
    if((a+c)%2==0 && assumeB%b == 0) {
        return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a,b,c;
        cin >> a >> b >>c;
        if(makeAP(a,b,c)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
