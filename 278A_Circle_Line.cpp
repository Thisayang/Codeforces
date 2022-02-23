#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110], s, t, sum = 0, ans = 0;
	cin >> n;
	for(int i = 0; i < n; ++ i) {
		cin >> a[i];
		sum += a[i];
	}
	cin >> s >> t;
	int begin = min(s, t), end = max(s,t);
	for(int i = begin - 1; i < end - 1; ++ i) ans += a[i];
	ans = ans > sum - ans ? sum - ans : ans;
	cout << ans;
	return 0;
}
