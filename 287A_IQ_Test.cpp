#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s[4];
	FOR(i, 0, 4) {
		cin >> s[i];
	}
	int flg = 0;
	FOR(i, 0, 3) {
		FOR(j, 0, 3) {
			int cnt = 0;
			if (s[i][j] == '#') cnt ++;
			else cnt --;
			if (s[i][j + 1] == '#') cnt ++;
			else cnt --;
			if (s[i + 1][j] == '#') cnt ++;
			else cnt --;
			if (s[i + 1][j + 1] == '#') cnt ++;
			else cnt --;
			if (abs(cnt) > 0) {
				flg = 1;
				break;
			} 
			
		}
		if (flg == 1) break;
	}
	cout << (flg == 1 ? "YES" : "NO") << endl;
	return 0;
}