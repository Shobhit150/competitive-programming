#include<bits/stdc++.h>
using namespace std;

long long makeItDivisbleBy25(long long n) {
  string n2 = to_string(n);
  int size_of_n = n2.size();
  vector<string> to_match = {"00", "25", "50", "75"};
  long long ans = INT_MAX;
  for(string &c: to_match) {
    int j = 2;
    int count = 0;
    for(int i=size_of_n-1; i>=0; i--) {
      if(n2[i] == c[j-1]) {
        j--;
      } else {
        count++;
      }
      if(j==0) {
        break;
      }
    }
    if(j == 0) {
      ans = min<long long>(ans, count);
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
        long long n;
        cin >> n;
        cout << (makeItDivisbleBy25(n)) << endl;
    }

    return 0;
}
