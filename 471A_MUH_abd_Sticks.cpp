#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a[6];
	map<int, int> mp;
	FOR(i, 0, 6) {
		cin >> a[i];
		mp[a[i]] ++;
	}
	vector<int> v;
	if (mp.size() == 1) cout << "Elephant" << endl;
	else if (mp.size() == 2) {
		int flg1 = 0, flg2 = 0;
		for (auto it = mp.begin(); it != mp.end(); ++ it) {
			v.push_back(it -> second);
		}
		FOR(i, 0, 2) {
			if (v[i] == 4) flg1 = 1;
			if (v[i] == 5) flg2 = 1;
		}
		if (flg1) cout << "Elephant" << endl;
		else if (flg2) cout << "Bear" << endl;
		else cout << "Alien" << endl;
	} else if (mp.size() == 3) {
		int flg1 = 0, flg2 = 0;
		for (auto it = mp.begin(); it != mp.end(); ++ it) {
			v.push_back(it -> second);
		}
		FOR(i, 0, 3) {
			if (v[i] == 4) flg1 = 1;
			else if (v[i] == 1) flg2 = 1;
		}
		if (flg1 && flg2) cout << "Bear" << endl;
		else cout << "Alien" << endl;
	} else {
		cout << "Alien" << endl;
	}
	return 0;
}