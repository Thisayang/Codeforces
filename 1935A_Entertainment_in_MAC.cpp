#include <bits/stdc++.h>

using namespace std;

int Solve(int n, string s) {
        string t = s;
        reverse(t.begin(), t.end());
        if (s <= t) {
                cout << s << endl;
                return 0;
        }
        cout << t << s << endl;
        return 0;
}

int main(void) {
        int t;
        int n;
        string s;
        cin >> t;
        while (t--) {
                cin >> n >> s;
                Solve(n, s);
        }
        return 0;
}
