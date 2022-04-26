#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	int k, flg = 0, cnt = 0;
	set<char> sett;
	cin >> s >> k;
	if (s.length() < k) flg = 1;
	for (int i = 0; s[i] != 0; ++ i) {
		if(sett.find(s[i]) == sett.end()) {
			cnt ++;
			sett.insert(s[i]);
		}
	}
	if (flg == 1) cout << "impossible" << endl;
	else cout << (k <= cnt ? 0 : k - cnt) << endl;
	return 0;
}