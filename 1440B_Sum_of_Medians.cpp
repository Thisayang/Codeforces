#include <bits\stdc++.h>
#define LL long long
#define loop(i, m, n) for(int i = m; i < n; ++ i)
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	LL t, n, k, a[200010];
	while(cin >> t) {
		while(t --) {
			cin >> n >> k;
			loop(i, 0, n * k) cin >> a[i];
			LL i = n * k, num = n - n / 2, sum = 0;
			if(n & 1) num --;
			int tmp = num;
			while(i && k) {
				-- i;
				if(tmp == 0) {
					sum += a[i];
					tmp = num;
					k --;
				}					
				else tmp --;
			}
			cout << sum << endl;
		}
	}
	return 0;
}
