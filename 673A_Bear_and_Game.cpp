#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[100], sum = 0, ans = 0;
	cin >> n;
	for(int i = 0; i < n; ++ i) cin >> a[i];
	for(int i = 0; i < n; ++ i) {	
		if(a[i] - sum > 15) {
			break;
		} else ans = a[i];
		sum = a[i];
	}
	if(90 - ans <= 15) ans = 90;
	else if(90 - ans > 15) ans += 15;
	cout << ans;
	return 0;
}
