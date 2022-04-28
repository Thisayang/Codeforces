#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	int cnt = 0, num = 0, ans = 0;
	while (getline(cin, s)) {
		if (s[0] == '+') num ++;
		else if (s[0] == '-') num --;
		else {
			for (int i = 0; s[i] != 0; ++ i) {
				if (s[i] == ':') {
					for (int j = i + 1; s[j] != 0; ++ j) {
						cnt ++;
					}
				}
			}
			ans += cnt * num;
			cnt = 0;
		}
	}
	cout << ans << endl;
	return 0;
}