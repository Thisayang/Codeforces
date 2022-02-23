#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int  t, n, a[2500], flg = 0;
	for(int i = 0; i < 50; ++ i) {
		for(int j = 0; j < 50; ++ j) {
			if(2020 * i + 2021 * j <= 100000) a[flg ++] = 2020 * i + 2021 * j;
			else break;
		}
	}
	sort(a, a + flg);
	while(cin >> t) {
		while(t --) {
			cin >> n;
			int i = 0;
			while(a[i] < n) ++ i;
			if(a[i] == n) cout << "YES" << endl;
			else cout << "NO" << endl;;
		}
	}
	return 0;
}
