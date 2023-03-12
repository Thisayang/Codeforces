#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve(void)
{
    int n;
    scanf("%d", &n);
    if (n & 1) {
        if (n == 3) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            for (int i = 0; i < n; ++i) {
                if (i & 1) {
                    cout << -(n / 2) << " ";
                } else {
                    cout << n / 2 - 1 << " ";
                }
            }
            cout << endl;
        }
    } else {
        cout << "YES" << endl;
        for (int i = 0; i < n; ++i) {
            if (i & 1) {
                cout << "1 ";
            } else {
                cout << "-1 ";
            }
        }
        cout << endl;
    }
    return;
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    scanf("%d", &t);
    while (t--) {
        Solve();
    }
	return 0;
}