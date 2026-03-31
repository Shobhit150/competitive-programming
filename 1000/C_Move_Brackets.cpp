#include <iosteam>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        stack<int> s;
        int n;
        cin >> n;
        for(int i=0;i<n;i++) {
            char c;
            cin >> c;
            if(c == ')') {
                if(!s.empty() && s.top() == '(') {
                    s.pop();
                } else {
                    s.push(c);
                }
            } else {
                s.push(c);
            }
        }
    }
    cout << s.size()/2 << "\n";
}
