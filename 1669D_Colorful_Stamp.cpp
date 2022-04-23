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
		int flg = 0;
		string t = "";
		for (int i = 0; i < n; ++ i) {
			if (s[i] == 'W') {
				if (t != "") {
					int a = 0, b = 0;
					for (int j = 0; t[j] != 0; ++ j) {
						if (t[j] == 'R') a = 1;
						else if (t[j] == 'B') b = 1;
					}
					if (a + b != 2) {
						flg = 1;
						break;
					} 
				}
				t = "";
			} else {
				t += s[i];
			}
		}
		if (t != "") {
			int a = 0, b = 0;
			for (int j = 0; t[j] != 0; ++ j) {
				if (t[j] == 'R') a = 1;
				else if (t[j] == 'B') b = 1;
			}
			if (a + b != 2) {
				flg = 1;
			} 
		}
		cout << (flg == 1 ? "NO" : "YES") << endl;
	}
	return 0;
}