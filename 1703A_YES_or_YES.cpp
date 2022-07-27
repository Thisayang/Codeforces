#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s, upper;
	cin >> t;
	while (t --) {
		cin >> s;
		upper.resize(s.size());
		transform(s.begin(), s.end(), upper.begin(), ::toupper);
		if (upper == "YES") cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}