#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, x;
	while(cin >> t) {
		while(t --) {
			int a[110] = {0};
			cin >> n;
			for(int i = 0; i < n; ++ i) {
				cin >> x;
				a[x] ++;
			}
			int m = 2, sum = 0;
			while(m --) {
				for(int i = 0; i < 110; ++ i) {
					if(a[i]) a[i] --;
					else {
						sum += i;
						break;
					}
				}
			}
			cout << sum << endl;
		}
	}
	return 0;
}
