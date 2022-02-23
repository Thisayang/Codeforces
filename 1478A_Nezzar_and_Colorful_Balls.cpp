#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a;
	while(cin >> t) {
		while(t --) {
			int x[110] = {0}, mmax = 0;
			cin >> n;
			for(int i = 0; i < n; ++ i) {
				cin >> a;
				x[a] ++;
			}
			sort(x, x + 110);
			cout << x[109] << endl;
		}
	}
	return 0;
}
