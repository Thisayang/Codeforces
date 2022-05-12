#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll solve(int n) {
	if (n == 0) return 1;
	if (n % 2 == 0) return solve(n / 2) * solve(n / 2);
	else return solve(n / 2) * solve(n / 2) * 2;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int q;
	string s, t;
	cin >> q;
	while (q --) {
		cin >> s >> t;
		int cnt = 0;
		for (int i = 0; t[i] != 0; ++ i) {
			if (t[i] == 'a') cnt ++;
		}
		if (t == "a") cout << 1 << endl;
		else if (cnt != 0) cout << -1 << endl;
		else cout << solve(s.length()) << endl;
	}
	return 0;
}