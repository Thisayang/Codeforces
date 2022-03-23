#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s, r;
	cin >> t;
	while (t --) {
		cin >> s >> r;
		int ans = 0;
		for (int i = 0; s[i] != 0; ++ i) {
			if (i % 2 == 0 && s[i] == r[0]) ans = 1;
		}
		cout << (ans ? "YES" : "NO") << endl;
	}
	return 0;
}