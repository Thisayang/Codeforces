#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, x, a[10];
	while(cin >> t) {
		while(t --) {
			cin >> n;
			memset(a, 0, sizeof(int) * 10);
			for(int i = 0; i < n; ++ i) {
				cin >> x;
				a[x] ++;
			}
			if(a[1] % 2 ||(a[1] == 0 && a[2] % 2)) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}
	return 0;
}
