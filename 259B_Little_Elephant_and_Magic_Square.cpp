#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a[3][3];
	FOR(i, 0, 3) {
		FOR(j, 0, 3) {
			cin >> a[i][j];
		}
	}
	int sum = a[0][2] + a[2][0];
	int tmp1 = a[1][0] + a[2][0];
	int tmp2 = a[0][1] + a[2][1];
	int tmp3 = a[0][2] + a[1][2];
	FOR(i, 0, sum) {
		if (i + tmp1 == (sum - i) + tmp3) {
			a[0][0] = i;
			a[2][2] = sum - i;
			break;
		}
	}
	a[1][1] = a[0][0] + tmp1 - tmp2;
	FOR(i, 0, 3) {
		FOR(j, 0, 3) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}