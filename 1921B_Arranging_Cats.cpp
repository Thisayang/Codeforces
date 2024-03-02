#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
    string s, t;
    int cnt = 0;
    int cnt1 = 0;
    cin >> s >> t;
    for (int i = 0; i < n; ++i) {
        if (s[i] != t[i]) {
            ++cnt;
            if (s[i] == '1') {
                ++cnt1;
            }
        }
    }
    return (cnt1 > cnt - cnt1 ? cnt1 : cnt - cnt1);
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
