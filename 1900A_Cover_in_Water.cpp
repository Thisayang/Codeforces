#include <bits/stdc++.h>
#define MAX 110
using namespace std;

int Solve(int n)
{
    char s[MAX];
    int ans = 0;
    int flg = 0;
    cin >> s;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '.') {
            ans++;
        }
        if (i < 2) {
            continue;
        }
        if (s[i] == '.' && s[i - 1] == '.' && s[i - 2] == '.') {
            flg = 1;
        }
    }
    if (flg == 1) {
        ans = 2;
    }
    return ans;
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
