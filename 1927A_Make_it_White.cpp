#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
    string s;
    int flg = 0;
    int st = 0;
    int end = 0;
    cin >> s;
    if (s[0] == s[n - 1] && s[0] == 'B') {
        return n;
    }
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'B' && flg == 0) {
            st = i;
            end = i;
            flg = 1;
        } else if (s[i] == 'B') {
            end = i;
        }
    }
    return end - st + 1;
}

int main(void)
{
    int t;
    int n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << Solve(n) << endl;
    }
    return 0;
}
