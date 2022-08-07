#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, cnt = 0, sum1 = 0, sum2 = 0;
	cin >> n;
	vector<int> a(n), b(n);
	FOR(i, 0, n) {
		cin >> a[i] >> b[i];
		sum1 += a[i];
		sum2 += b[i];
	}
	int mx = abs(sum1 - sum2);
	FOR(i, 0, n) {
		int t1 = sum1 - a[i] + b[i];
		int t2 = sum2 - b[i] + a[i];
		if (abs(t1 - t2) > mx) {
			mx = abs(t1 - t2);
			cnt = i + 1;
		}
	}
	cout << cnt << endl;
	return 0;
}