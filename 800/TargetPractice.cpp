
#include <bits/stdc++.h>
using namespace std;

int point(vector<string> &grid) {
    int ans = 0;
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            int x = i;
            int y = j;
            if(grid[i][j] == 'X') {
                if(i>4) {
                    x = i - ((i-5)*2 + 1); 
                }
                if(j>4) {
                    y = j - ((j-5)*2 + 1); 
                }
                ans += min(x,y) + 1;
                
            }
                
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        vector<string> grid(10);
        for (int i = 0; i < 10; i++) {
            cin >> grid[i];  
        }
        cout << point(grid) << endl;
    }

    return 0;
}