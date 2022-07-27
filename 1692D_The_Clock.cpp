#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, h, m, x;
	string s;
	cin >> t;
	int hx[] = {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272,
		1342, 1412};
	while (t --) {
		cin >> s >> x;
		stringstream si;
		h = stoi(s.substr(0, 2));
		m = stoi(s.substr(3));
		//scanf("%d:%d%d", &h, &m, &x);
		if (x == 1) cout << 16 << endl;
		else {
			int tmp = h * 60 + m, ans = 0;
			set<int> sett;
			while (sett.find(tmp) == sett.end()) {
				sett.insert(tmp);
				tmp += x;
				tmp %= 1440;
			}
			for (int i = 0; i < 16; ++ i) {
				if (sett.find(hx[i]) != sett.end()) ans ++;
			}
			cout << ans << endl;
		}
	}
	return 0;
}