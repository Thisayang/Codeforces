#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	cin >> t;
	while (t --) {
		cin >> n >> s;
		int ans = 0;
		for (int i = 0; s[i] != 0; i += 2) {
			if (s[i] == '0' && s[i + 1] == '1') ans ++;
			if (s[i] == '1' && s[i + 1] == '0') ans ++;
		}
		cout << ans << endl;
	}
	return 0;
}