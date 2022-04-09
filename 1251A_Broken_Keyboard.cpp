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
		int len = s.length();
		if (len == 1) cout << s << endl;
		else {
			vector<int> a(26, 0);
			set<char> sett;
			a[s[0] - 'a'] ++;
			for (int i = 1; i < len; ++ i) {
				if (s[i - 1] != s[i]) {
					if (a[s[i - 1] - 'a'] % 2 == 1) {
						sett.insert(s[i - 1]);
					}
					a[s[i - 1] - 'a'] = 0;
				}
				a[s[i] - 'a'] ++;
			}
			if (a[s[len - 1] - 'a'] % 2 == 1) sett.insert(s[len - 1]);
			for (auto it = sett.begin(); it != sett.end(); ++ it) {
				cout << *(it);
			}
			cout << endl;
		}
	}
	return 0;
}