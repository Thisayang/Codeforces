#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, d, a[2010];
	while(cin >> n >> d)  {
		for(int i = 0; i < n; ++ i) cin >> a[i];
		int ans = 0;
		for(int i = 1; i < n; ++ i) {
			int tmp = a[i - 1] + 1 - a[i];
			if(tmp < 1) continue;
			else {
				ans += (tmp + d - 1) / d;
				a[i] += (tmp + d - 1) / d * d;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
