#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve(void)
{
    int n;
    int a;
    int b;
    cin >> n >> a >> b;
    if (n == a && n == b) {
        puts("Yes");
    } else {
        if (a + b < n - 1) {
            puts("Yes");
        } else {
            puts("No");
        }
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