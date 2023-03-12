#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	cin >> t;
	while (t --) {
		cin >> n >> s;
		if (n != 5) {
			cout << "NO" << endl;
		} else {
			sort(s.begin(), s.end());
			if (s == "Timru") cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}