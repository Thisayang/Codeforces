#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, a[200010], l, r, tmp1 = 0, tmp2 = 0;
	cin >> n >> m;
	for(int i = 0; i < n; ++ i) {
		cin >> a[i];
		if(a[i] == 1) tmp1 ++;
		else tmp2 ++;
	}
	for(int i = 0; i < m; ++ i) {
		cin >> l >> r;
		int num = r - l + 1;
		if(num % 2 != 0)
			cout << 0 << endl;
		else {
			if(num / 2 <= tmp1 && num/2 <= tmp2) cout << 1 << endl;
			else cout << 0 << endl;
		}
	}
	return 0;
}
