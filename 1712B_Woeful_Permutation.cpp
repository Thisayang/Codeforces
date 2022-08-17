#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		if (n == 1) cout << "1" << endl;
		else {
			if (n & 1) {
				cout << "1 3 2";
				FOR(i, 3, n) {
					if (i & 1) cout << " " << i + 2;
					else cout << " " << i;
				}
				cout << endl;
			} else {
				cout << "2 1"; 
				FOR(i, 2, n) {
					if (i & 1) cout << " " << i;
					else cout << " " << i + 2;
				}
				cout << endl;
			}
		}
	}
	return 0;
}