#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, h, m, l, r, x, s[60], max = 0;
	cin >> n >> h >> m;
	for(int i = 1; i <= n; ++ i) s[i] = h;
	for(int i = 0; i < m; ++ i) {
		cin >> l >> r >> x;
		for(int i = l; i <= r; ++ i)
			if(s[i] > x) s[i] = x;
	}
	for(int i = 1; i <= n; ++ i) max += s[i] * s[i];
	cout << max;
	return 0;
}
