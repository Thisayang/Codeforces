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
		int len = s.length(), ans = 0;
		for (int i = 1; i < len; ++ i) {
			if(s[i - 1] == '0' && s[i] == '0') ans += 2;
		}
		for (int i = 2; i < len; ++ i) {
			if (s[i - 2] == '0' && s[i - 1] == '1' && s[i] == '0') ans ++;
		}
		cout << ans << endl;
	}
	return 0;
}