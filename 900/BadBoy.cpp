#include<iostream>

using namespace std;

void badBoy(int n, int m, int i, int j) {
    cout << 1 << " " << 1 << " " << n << " " << m << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, i, j;
        cin >> n >> m >> i >> j;

        badBoy(n, m, i, j);
    }

    return 0;
}