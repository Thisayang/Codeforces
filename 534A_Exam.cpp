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
	if (n < 3) {
		cout << "1\n1" << endl;
	} else if (n == 3) {
		cout << "2\n1 3" << endl;
	} else if (n == 4) {
		cout << "4\n3 1 4 2" << endl;
	} else {
		cout << n << endl;
		if (n & 1) {
			cout << n << " ";
			FOR(i, 0, n / 2) cout << i + 1 + n / 2 << " " << i + 1 << " ";
		} else {
			FOR(i, 0, n / 2) cout << i + 1 + n / 2 << " " << i + 1 << " ";
		}
		cout << endl;
	}
	return 0;
}