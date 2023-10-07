#include <bits/stdc++.h>

using namespace std;

int Solve(string s)
{
        if (s == "bac" || s == "acb" || s == "abc" || s == "cba") {
                return 1;
        } else {
                return 0;
        }
}

int main(void)
{
        int t;
        string s;
        cin >> t;
        while (t--) {
                cin >> s;
                cout << (Solve(s) ? "YES" : "NO") << endl;
        }
        return 0;
}
