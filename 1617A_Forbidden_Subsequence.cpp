#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		string s, x;
		cin >> s >> x;
		int a[26] = {0};
		for (int i = 0; s[i] != 0; ++ i) {
			a[s[i] - 'a'] ++;
		}
		if (!a[0] || !a[1] || !a[2] || x != "abc") {
			sort(s.begin(), s.end());
			cout << s << endl;
		} else {
			while (a[0] --) cout << 'a';
			while (a[2] --) cout << 'c';
			while (a[1] --) cout << 'b';
			for (int i = 3; i < 26; ++ i) {
				while (a[i] --) cout << char('a' + i);
			}
			cout << endl;
		}
	}
	return 0;
}