#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a;
	cin >> n;
	set<int> sett;
	FOR(i, 0, n) {
		cin >> a;
		if (i & 1) {	//逆序
			if (a >= i) sett.insert(a - i);
			else sett.insert(a + n - i);
		} else { 		//正序
			if (a <= i) sett.insert(i - a);
			else sett.insert(n - a + i);
		}
	}
	if (sett.size() == 1) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}