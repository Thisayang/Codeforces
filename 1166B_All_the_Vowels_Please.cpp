#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int k;
	cin >> k;
	int flg = 1;
	string s = "aeiou";
	for (int i = 5; i <= int(sqrt(k)); ++ i) {
		if (k % i != 0) continue;
		else if (k % i == 0 && k / i < 5) break;
		else if (k % i == 0 && k / i >= 5) {
			flg = 0;
			int cnt = 0;
			FOR(j, 0, i) {
				FOR(x, 0, k / i) {
					cout << s[(j + x) % 5];
					cnt ++;
				}
			}
			cout << endl;
		}
		if (flg == 0) break;
	}
	if (flg == 1) cout << -1 << endl;
	return 0;
}