#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        stack<char> st;
        for (char c : s) {
            if (!st.empty() && st.top() != c) {
                st.pop(); // a triplet would be formed and middle removed
            } else {
                st.push(c);
            }
        }

        cout << st.size() << endl;
    }

    return 0;
}
