#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	if (n == 1 || n == 2) cout << "No" << endl;
	else {
		cout << "Yes" << endl;
		cout << n - 1;
		FOR(i, 0, n - 1) cout << " " << i + 1;
		cout << endl << 1 << " " << n << endl;
	}
	return 0;
}