#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[1010], ans = 0;
	cin >> n;
	for(int i = 0; i < n; ++ i) cin >> a[i];
	for(int i = 1; i < n -1; ++ i) {
		if(a[i] > a[i - 1] && a[i] > a[i + 1]) ans ++;
		if(a[i] < a[i - 1] && a[i] < a[i + 1]) ans ++;
	}
	cout << ans;
	return 0;
}
