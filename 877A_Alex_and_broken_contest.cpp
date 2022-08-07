#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	cin >> s;
	int flg = 0;
	FOR(i, 0, s.length()) {
		if (s[i] == 'A') {
			if (s.length() - i < 3) continue;
			if (s[i + 1] == 'n' && s[i + 2] == 'n') flg ++;
		} else if (s[i] == 'D') {
			if (s.length() - i < 5) continue;
			if (s[i + 1] == 'a' && s[i + 2] == 'n' && s[i + 3] == 'i' && s[i + 4] == 'l') flg ++;
		} else if (s[i] == 'N') {
			if (s.length() - i < 6) continue;
			if (s[i + 1] == 'i' && s[i + 2] == 'k' && s[i + 3] == 'i' && s[i + 4] == 't' && s[i + 5] == 'a') flg ++;
		} else if (s[i] == 'O') {
			if (s.length() - i < 4) continue;
			if (s[i + 1] == 'l' && s[i + 2] == 'y' && s[i + 3] == 'a') flg ++;
		} else if (s[i] == 'S') {
			if (s.length() - i < 5) continue;
			if (s[i + 1] == 'l' && s[i + 2] == 'a' && s[i + 3] == 'v' && s[i + 4] == 'a') flg ++;
		}
	}
	cout << (flg == 1 ? "YES" : "NO") << endl;
	return 0;
}