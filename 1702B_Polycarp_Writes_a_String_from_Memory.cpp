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
		set<char> sett;
		int cnt = 1;
		for (int i = 0; s[i] != 0; ++ i) {
			if (sett.find(s[i]) == sett.end()) {
				if (sett.size() < 3) sett.insert(s[i]);
				else {
					cnt ++;
					sett.clear();
					sett.insert(s[i]);
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}