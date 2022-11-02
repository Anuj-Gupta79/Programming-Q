#include <bits/stdc++.h>
using namespace std;

int fun(char c, string s) {
    int ans = 0;
    s += s;
    int last = 0;

    for (int i = 2*s.size(); i > 0; --i) {
        if (s[i] == 'g') last = i;
        if (s[i] == c) ans = max(ans, last - i);
    }

    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        // write your code here
        int n; cin >> n;
        char c; cin >> c;
        string s; cin >> s;

        cout << fun(c, s) << endl;
    }
    return 0;
}