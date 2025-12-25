#include <bits/stdc++.h>
using namespace std;

string smallestStringWithKSwaps(vector<char>& arr, int k) {
    int n = arr.size();

    for (int i = 0; i < n && k > 0; i++) {
        int pos = i;
        
        // Find smallest character within reachable range
        for (int j = i + 1; j < n && j - i <= k; j++) {
            if (arr[j] < arr[pos]) {
                pos = j;
            }
        }

        // Bring arr[pos] to index i using adjacent swaps
        for (int j = pos; j > i; j--) {
            swap(arr[j], arr[j - 1]);
        }

        k -= (pos - i);
    }

    return string(arr.begin(), arr.end());
}

int main() {
    vector<char> arr = {'a', 'd', 'c', 'a', 'b'};
    int k = 2;

    cout << smallestStringWithKSwaps(arr, k) << endl;
    return 0;
}
