#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int q;
	string s[1010], t[1010];
	map<string, int> mp;
	cin >> q;
	FOR(i, 0, q) {
		cin >> s[i] >> t[i];
		mp[s[i]] = i;
	}
	vector<int> a(q, 0);
	queue<string> qu;
	string x;
	FOR(i, 0, q) {
		if (a[i] == 1) continue;
		int tmp = i;
		a[tmp] = 1;
		x = s[i];
		while (mp.find(t[tmp]) != mp.end()) {
			tmp = mp.find(t[tmp])->second;
			a[tmp] = 1;
		}
		x += " " + t[tmp];
		qu.push(x);
	}
	cout << qu.size() << endl;
	while (!qu.empty()) {
		cout << qu.front() << endl;
		qu.pop();
	}
	return 0;
}