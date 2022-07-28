#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string a, b;
	cin >> a >> b;
	if (a.size() != b.size()) {
		cout << "NO";
	} else {
		int x, y, cnt = 0;
		FOR(i, 0, a.length()) {
			if (a[i] != b[i]) {
				cnt ++;
				if (cnt == 1) x = i;
				else y = i;
			}
		}
		if (cnt != 2) cout << "NO";
		else {
			if (a[x] == b[y] && a[y] == b[x]) cout << "YES";
			else cout << "NO";
		}
	}
	cout << endl;
	return 0;
}