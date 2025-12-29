#include<bits/stdc++.h>
using namespace std;

void deletive(string &s, string &t) {
    int n = s.size();
    int m = t.size();
    vector<int> freq(26,0);
    for(int i=0;i<m;i++) {
        freq[t[i] - 'A']++;
    }
    int i = n-1;
    int j = m-1;
    while(i >= 0 && j >= 0) {
        
        if(s[i] == t[j]) {
            freq[t[j] - 'A']--;
            i--;
            j--;   
        }
        else if(freq[s[i] - 'A']>=1) {
            cout << "No" << endl;
            return;
        }else {
            i--;
        }
    }
    if(j<0) {
        cout << "Yes" << endl;
        return;
    }

    cout << "No" << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        string t;
        cin >> s >> t;
        deletive(s, t);
    }

    return 0;
}
