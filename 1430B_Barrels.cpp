#include <bits\stdc++.h>
#define LL long long
using namespace std;
LL t, n, k, a[200010], sum;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> t;
	while(t --) {
		cin >> n >> k;
		for(int i = 0; i < n; i ++) cin >> a[i];
		sort(a, a + n);
		sum = a[n - 1];
		for(int i = n - 2; k > 0; -- i, -- k) {
			sum += a[i];
		}
		cout << sum << endl;
	}
	return 0;
}
