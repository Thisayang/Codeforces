#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s;
	cin >> n >> s;
	if (n & 1) {
		cout << s[0] << s[1] << s[2];
		for (int i = 3; i < n; i += 2) {
			cout << '-' << s[i] << s[i + 1];
		}
	} else {
		cout << s[0] << s[1];
		for (int i = 2; i < n; i += 2) {
			cout << '-' << s[i] << s[i + 1];
		}
	}
	return 0;
}