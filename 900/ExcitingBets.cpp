#include<iostream>

using namespace std;

void exciting(long long a, long long b) {
    long long diff = abs(a-b);
    if (diff == 0) {
        cout << 0 << " " << 0 << endl;
        return;
    }
    long long other = min(a%diff, diff - (a%diff));
    cout << diff << " " << other << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a,b;
        cin >> a >> b;

        exciting(a,b);
    }

    return 0;
}