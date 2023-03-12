#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve(void)
{
    int n;
    string s;
    cin >> n >> s;
    int num = 3;
    bool ans = true;
    for (int i = 0; i < n; ++i) {
        if (i % num == 1 && s[i] != s[i + 1]) {
            ans = false;
        }
    }
    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    cin >> t;
    while (t--) {
        Solve();
    }
	return 0;
}