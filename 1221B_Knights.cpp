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
	vector< vector<char>> v(n, vector<char> (n, 0));
	int flg = 1;
	FOR(i, 0, n) {
		FOR(j, 0, n) {
			if (i & 1) {
				if (j & 1) v[i][j] = 'W';
				else v[i][j] = 'B';
			} else {
				if (j & 1) v[i][j] = 'B';
				else v[i][j] = 'W';
			}
			cout << v[i][j];
		}
		cout << endl;
	}
	return 0;
}