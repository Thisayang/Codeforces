#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110], cnt1 = 0, cnt2 = 0, sum = 0;
	cin >> n;
	FOR(i, 0, n) {
		cin >> a[i];
		if (100 == a[i]) cnt1 ++;
		if (200 == a[i]) cnt2 ++;
		sum += a[i];
	}
	sum /= 100;
	if (sum & 1) cout << "NO" << endl;
	else {
		if ((cnt1 % 2 == 0 && cnt1 != 0) || (cnt1 == 0 && cnt2 % 2 == 0)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}