#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, s;
	cin >> t;
	while (t --) {
		cin >> s;
		if (s < 10) cout << s << endl;
		else if (s < 18) cout << s - 9 << 9 << endl;
		else if (s < 25) cout << s - 17 << "89" << endl;
		else if (s < 31) cout << s - 24 << "789" << endl;
		else if (s < 36) cout << s - 30 << "6789" << endl;
		else if (s < 40) cout << s - 35 << "56789" << endl;
		else if (s < 43) cout << s - 39 << "456789" << endl;
		else if (s < 45) cout << s - 42 << "3456789" << endl;
		else cout << "123456789" << endl;
	}
	return 0;
}