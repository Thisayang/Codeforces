#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int m, tmp;
	map<int, int> mp;
	cin >> m;
	FOR(i, 0, m) {
		cin >> tmp;
		mp[tmp] ++;
	}
	vector<int> a;
	for (auto it = mp.begin(); it != mp.end(); ++ it) {
		if (it->second > 2) it->second =  2;
		a.push_back(it->first);
		it->second --;
	}
	for (auto it = mp.rbegin(); it != mp.rend(); ++ it) {
		if (it == mp.rbegin()) continue;
		if (it->second == 1) a.push_back(it->first);
	}
	cout << a.size() << endl;
	FOR(i, 0, a.size()) cout << a[i] << " ";
	cout << endl;
	return 0;
}