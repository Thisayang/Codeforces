#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	FOR(i, 1, n + 1) {
		FOR(j, 1, i + 1) {
			if (i * j >= n) {
				cout << i + j << endl;
				return 0;
			}
		}
	}
	return 0;
}