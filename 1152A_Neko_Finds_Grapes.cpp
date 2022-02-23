#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, a[100010], b[100010];
	cin >> n >> m;
	int odd1 = 0, odd2 = 0, even1 = 0, even2 = 0;
	for(int i = 0; i != n; i ++) {
		cin >> a[i];
		if(a[i] & 1) odd1 ++;
		else even1 ++;
	}
	for(int i = 0; i != m; i ++) {
		cin >> b[i];
		if(b[i] & 1) odd2 ++;
		else even2 ++;
	}
	int ans = min(odd1, even2) + min(even1, odd2);
	cout << ans;
	return 0;
}
