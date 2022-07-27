#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, p;
	string s;
	cin >> t;
	while (t --) {
		cin >> s >> p;
		string w(s);
		sort(w.rbegin(), w.rend());
		int cost = 0;
		map<char, int> mp;
		for (int i = 0; s[i] != 0; ++ i) {
			cost += s[i] - 'a' + 1;
		}
		for (int i = 0; w[i] != 0; ++ i) {
			if (cost > p) {
				mp[w[i]] ++;
				cost -= w[i] - 'a' + 1;
			}
		}
		for (int i = 0; s[i] != 0; ++ i) {
			if (mp[s[i]] > 0) {
				mp[s[i]] --;
				continue;
			}
			cout << s[i];
		}
		cout << endl;
	}
	return 0;
}