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
		map<char, int> mp;
		for (int i = 0; i < n; ++ i) {
			mp[s[i]] ++;
			if (mp['T'] < mp['M']) {
				cout << "NO" << endl;
				goto loop;
			}
		}
		mp.clear();
		for (int i = n - 1; i >= 0; -- i) {
			mp[s[i]] ++;
			if (mp['T'] < mp['M']) {
				cout << "NO" << endl;
				goto loop;
			}
		}
		if (mp['T'] != mp['M'] * 2) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
		loop: ;
	}
	return 0;
}