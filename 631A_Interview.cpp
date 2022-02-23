#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[1010], b[1010];
	while(cin >> n) {
		for(int i = 1; i <= n; ++ i) cin >> a[i];
		for(int i = 1; i <= n; ++ i) cin >> b[i];
		int ans1 = a[1];
		for(int i = 2; i <= n; ++ i) ans1 = ans1 | a[i];
		int ans2 = b[1];
		for(int i = 2; i <= n; ++ i) ans2 = ans2 | b[i];
		cout << ans1 + ans2 << endl;
	}
	return 0;
}
