#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve(void)
{
    int n;
    cin >> n;
    int th = 3;
    for (int i = 1; i <= n; ++i) {
        if (i < th) {
            for (int j = 1; j <= i; ++j) {
                cout << 1 << " ";
            }
        } else {
            cout << 1 << " ";
            for (int j = 1; j < i - 1; ++j) {
                cout << 0 << " ";
            }
            cout << 1 << " ";
        }
        cout << endl;
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