#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110], Min = 101, Max = 0, flg_min = 0, flg_max = 0;
	cin >> n;
	for(int i = 1; i <= n; ++ i) {
		cin >> a[i];
		if(Min > a[i]) Min = a[i], flg_min = i;
		if(Max < a[i]) Max = a[i], flg_max = i;
	}
	int ans1 = max(flg_min - 1, flg_max - 1);
	int ans2 = max(n - flg_min, n - flg_max);
	cout << max(ans1, ans2);
	return 0;
}
