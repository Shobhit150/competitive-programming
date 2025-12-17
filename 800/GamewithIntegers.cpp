#include<bits/stdc++.h>
using namespace std;

bool game(int n) {
    if(n%3 == 0) {
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
        int n;
        cin >> n;

        if(game(n)) {
            cout << "Second" << endl;
        }else {
            cout << "First" << endl;
        }

        
    }

    return 0;
}
