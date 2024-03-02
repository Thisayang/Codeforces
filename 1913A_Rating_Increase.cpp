#include <bits/stdc++.h>

using namespace std;

int Solve(string s)
{
    int a = s[0] - '0';
    int b = 0;
    int i;
    for (i = 1; s[i] != 0; ++i) {
        if (s[i] != '0') {
            break;
        }
        a = a * 10 + (s[i] - '0');
    }
    for (i; s[i] != 0; ++i) {
        b = b * 10 + (s[i] - '0');
    }
    if (a >= b || a == 0 || b == 0) {
        cout << -1 << endl;
    } else {
        cout << a << " " << b << endl;
    }
    return 0;
}

int main(void)
{
    int t;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        Solve(s);
    }
    return 0;
}
