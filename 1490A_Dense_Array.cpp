#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[50];
	cin >> t;
	while(t --) {
		cin >> n;
		for(int i = 0; i < n; ++ i) cin >> a[i];
		int ans = 0;
		for(int i = 1; i < n; ++ i) {
			int Max = max(a[i], a[i - 1]);
			int Min = min(a[i], a[i - 1]);
			while(Max / Min >= 2 && Min * 2 != Max) {
				Min *= 2;
				ans ++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
