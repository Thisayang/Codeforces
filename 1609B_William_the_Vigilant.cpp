#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, b;
	string s;
	cin >> a >> b >> s;
	int cnt = 0;
	FOR(i, 0, a - 2) {
		if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c') {
			cnt ++;
		}
	}
	int p;
	char ch;
	FOR(i, 0, b) {
		cin >> p >> ch;
		int flg1 = 0, flg2 = 0;
		for (int i = 0; i < 3; ++ i) {
			int j = p - i - 1;
			if (j < 0 || j >= a) continue;
			if (s[j] == 'a' && s[j + 1] == 'b' && s[j + 2] == 'c') flg1 = 1;
		}
		s[p - 1] = ch;
		for (int i = 0; i < 3; ++ i) {
			int j = p - i - 1;
			if (j < 0 || j >= a) continue;
			if (s[j] == 'a' && s[j + 1] == 'b' && s[j + 2] == 'c') flg2 = 1;
		}
		if (flg1 && !flg2) cnt --;
		else if (!flg1 && flg2) cnt ++;
		cout << cnt << endl;
	}
	return 0;
}