#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, l, r, numl = 0, numr = 0, ans = 0;
	cin >> n;
	for(int i = 0; i < n; ++ i) {
		cin >> l >> r;
		if(l == 1) numl ++;
		if(r == 1) numr ++;
	}
	ans += min(numl, n - numl);
	ans += min(numr, n - numr);
	cout << ans;
	return 0;
}
