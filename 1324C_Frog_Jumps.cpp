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
		int ans = 1, cnt = 0;
		for (int i = 0; s[i] != 0; ++ i) {
			if (s[i] == 'L') {
				cnt = i - 1;
				for (int j = i; s[j] != 0; ++ j) {
					if (s[j] == 'R') {
						cnt = j - i + 1;
						i = j;
						break;
					} else if (s[j + 1] == 0) {
						cnt = j - i + 2;
						i = j;
						break;
					}
				}
				ans = max(ans, cnt);
			}
		}
		cout << ans << endl;
	}
	return 0;
}