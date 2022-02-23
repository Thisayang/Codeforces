#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int q, n, k, a;
	while(cin >> q) {
		while(q --) {
			cin >> n >> k;
			int min = 100000000, max = 1;
			for(int i = 0; i < n; ++ i) {
				cin >> a;
				min = min < a ? min : a;
				max = max > a ? max : a;
			}	
			if(max - min > 2 * k) cout << -1 << endl;
			else cout << min + k << endl;
		}
	}
	return 0;
}
