#include <bits\stdc++.h>
#define LL long long
using namespace std;
struct pa{
	int n, m;
};
pa d[200010];
int x[200010], y[200010];
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	LL t, a, b, k;
	cin >> t;
	while(t --) {
		cin >> a >> b >> k;
		memset(x, 0, sizeof(x));
		memset(y, 0, sizeof(y));
		LL ans = 0;
		for(int i = 0, s; i < k; ++ i) {
			cin >> s;
			d[i].n = s;
			x[s] ++;
		}
		for(int i = 0, s; i < k; ++ i) {
			cin >> s;
			d[i].m = s;
			y[s] ++;
		}
		for(int i = 0; i < k; ++ i) {
			LL tmp = k - x[d[i].n] - y[d[i].m] + 1;
			ans += tmp;
		}
		cout << ans / 2 << endl;
	}
	return 0;
}
