#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s1, s2;
	int flg = 0;
	getline(cin, s1);
	getline(cin, s2);
	map<char, int> mp1, mp2;
	for (int i = 0; s1[i] != 0; ++ i) {
		if (s1[i] == ' ') continue;
		mp1[s1[i]] ++;
	}
	for (int i = 0; s2[i] != 0; ++ i) {
		if (s2[i] == ' ') continue;
		mp2[s2[i]] ++;
	}
	for (auto it = mp2.begin(); it != mp2.end(); ++ it) {
		if (it->second > mp1[it->first]) {
			flg = 1;
			break;
		}
	}
	cout << (flg == 1 ? "NO" : "YES") << endl;
	return 0;
}