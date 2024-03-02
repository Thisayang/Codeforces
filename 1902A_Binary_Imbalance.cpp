#include <bits/stdc++.h>
#define MAX (100)
using namespace std;

int Solve(int n)
{
    char s[MAX];
    cin >> s;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    int t;
    int n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << (Solve(n) ? "YES" : "NO") << endl;
    }
    return 0;
}
