#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	int n;
	string s;
	cin >> t;
	while (t--) {
		cin >> n >> s;
		sort(s.rbegin(), s.rend());
		cout << s[0] - 'a' + 1 << endl;
	}
	return 0;
}