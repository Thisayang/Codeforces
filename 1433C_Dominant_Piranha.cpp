#include <bits\stdc++.h>
#define LL long long
using namespace std;
int t, n, a[300010];
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	while(cin >> t) {
		while(t --) {
			cin >> n;
			int max = 1, maxnum = -1;
			for(int i = 1; i <= n; ++ i) {
				cin >> a[i];
				if(max < a[i]) max = a[i];
			}
			a[0] = max, a[n + 1] = max; 
			for(int i = 1; i <= n; ++ i) {
				if(a[i] == max)
					if(max != a[i - 1] || max != a[i + 1]) {
						maxnum = i;
						break;
					}
			}
			cout << maxnum << endl;
		}
	}
	return 0;
}
