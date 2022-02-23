#include <bits\stdc++.h>
#define LL long long
#define loop(i, m, n, a) for(int i = m; i < n; i += a)
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110];
	while(cin >> n) {
		loop(i, 0, n, 1) cin >> a[i];
		int mmax = a[1] - a[0], mmin = a[2] - a[0];
		loop(i, 2, n, 1) if(a[i] - a[i - 1] > mmax) mmax = a[i] - a[i - 1];
		loop(i, 3, n, 1) if(a[i] - a[i - 2] < mmin) mmin = a[i] - a[i - 2];
		int ans = max(mmax, mmin);
		cout << ans << endl;
	}
	return 0;
}
