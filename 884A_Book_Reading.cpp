#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, t, a[110], ans = 0;
	cin >> n >> t;
	for(int i = 0; i < n; ++ i) cin >> a[i];
	while(t > 0) t -= (86400 - a[ans ++]);
	cout << ans;
	return 0;
}
