#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve(void)
{
    int n;
    int en = 2;
    cin >> n;
    int ans = n / en + 1;
    for (int i = ans; i < n; ++i) {
        cout << i << " " << i - n / en << " ";
    }
    if (n & 1) {
        cout << n;
    } else {
        cout << n << " " << n / en;
    }
    cout << endl;
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