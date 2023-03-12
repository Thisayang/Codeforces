#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve(void)
{
    int n;
    int std = 10;
    int ans = 0;
    int nin = 9;
    int ten = 10;
    cin >> n;
    if (n > nin) {
        ans = nin;
    } else {
        ans = n;
    }
    for (int i = 10; i <= n; i += std) {
        ans++;
        if (i % (std * ten) == 0) {
            std *= ten;
        }
    }
    cout << ans << endl;
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