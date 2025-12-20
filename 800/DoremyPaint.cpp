#include<bits/stdc++.h>
using namespace std;

bool paint(int n, vector<int> &a) {
    unordered_map<int, int> m;
    for(int &num: a) {
        m[num]++;
        if(m.size()>2) return false;
        
    }
    if(m.size() < 2) return true;
    auto it = m.begin();
    int freq1 = it->second;
    it++;
    int freq2 = it->second;
    if(abs(freq1 - freq2) > 1) {
        return false;
    }
    return true;
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (paint(n,a)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }

        
    }

    return 0;
}
