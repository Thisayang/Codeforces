#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		string s[2];
		cin >> s[0] >> s[1];
		int cnt = 0;
		for (int i = 0; i < n; ++ i) {
			if (s[1][i] == '1') {
				if (s[0][i] == '0') {
					cnt ++;
				} else if (i != 0 && s[0][i - 1] == '1') {
					cnt ++;
					s[0][i - 1] = '0';
				} else if (i != n - 1 && s[0][i + 1] == '1') {
					cnt ++;
					s[0][i + 1] = '0';
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}