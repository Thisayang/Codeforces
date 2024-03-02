#include <bits/stdc++.h>

using namespace std;

int Solve(char *s)
{
    int ans = 4;
    char ch = '1';
    for (int i = 0; i < 4; ++i) {
        if (s[i] == ch) {
            continue;
        }
        if (s[i] == '0') {
            s[i] = '0' + 10;
        }
        ans += abs(s[i] - ch);
        ch = s[i];
    }
    return ans;
}

int main(void)
{
    int t;
    char s[5];
    cin >> t;
    while (t--) {
        cin >> s;
        cout << Solve(s) << endl;
    }
    return 0;
}
