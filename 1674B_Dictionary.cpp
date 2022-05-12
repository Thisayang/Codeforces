#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s;
	cin >> t;
	while (t --) {
		cin >> s;
		int ans = (s[0] - 'a') * 25;
		if (s[1] > s[0]) ans += s[1] - 'a';
		else ans += s[1] - 'a' + 1;
		cout << ans << endl;
	}
	return 0;
}