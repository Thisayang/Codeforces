#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	cin >> s;
	int mx = 0, cnt = 0;
	set<char> sett;
	sett.insert('A');
	sett.insert('E');
	sett.insert('I');
	sett.insert('O');
	sett.insert('U');
	sett.insert('Y');
	s += " ";
	for (int i = 0; s[i] != 0; ++ i) {
		cnt ++;
		mx = max(mx, cnt);
		if (sett.find(s[i]) != sett.end()) {
			cnt = 0;
		}
	}
	cout << mx << endl;
	return 0;
}
