#include<bits/stdc++.h>
using namespace std;

int paint(int n, int m, string x, string s) {
    string curr = x;
    int count = 0;
    while(curr.size() < s.size()) {
        curr += curr;
        count++;
    }

    for(int i=0;i<2;i++) {
        if(curr.find(s) != string::npos) {
            return count;
        }
        count++;
        curr += curr;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string s;
        string x;
        cin >> x;
        cin >> s;
        
        cout << paint(n,m,x,s) << endl;
        
    }

    return 0;
}
