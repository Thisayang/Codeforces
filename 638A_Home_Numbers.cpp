#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a;
	cin >> n >> a;
	if (a & 1) cout << a / 2 + 1 << endl;
	else cout << n / 2 - (a / 2) + 1 << endl;
	return 0;
}