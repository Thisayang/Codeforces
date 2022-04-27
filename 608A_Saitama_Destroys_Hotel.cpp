#include <bits/stdc++.h>
#define ll long long int
using namespace std;
struct man {
	int x, y;
}a[110];
bool cmp(man a, man b) {
	return a.x > b.x;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, s, ans = 0;
	cin >> n >> s;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i].x >> a[i].y;
	}
	sort(a, a + n, cmp);
	for (int i = 0; i < n; ++ i) {
		ans += s - a[i].x;
		s = a[i].x;
		if (ans < a[i].y) ans = a[i].y;
	}
	cout << ans + s << endl;
	return 0;
}