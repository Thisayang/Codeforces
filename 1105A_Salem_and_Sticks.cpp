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
	vector<int> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
	}
	int cnt = 1, ans = 1e9 + 10;
	FOR(i, 1, 101) {
		int sum = 0;
		FOR(j, 0, n) {
			if (a[j] > i + 1) sum += a[j] - i - 1;
			else if (a[j] < i - 1) sum += i - 1 - a[j];
		}
		if (sum < ans) {
			ans = sum;
			cnt = i;
		}
	}
	cout << cnt << " " << ans << endl;
	return 0;
}