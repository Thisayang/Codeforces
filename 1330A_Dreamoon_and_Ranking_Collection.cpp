#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, x, a, num[210];
	while(cin >> t) {
		while(t --) {
			memset(num, 0, sizeof(num));
			cin >> n >> x;
			for(int i = 0; i < n; ++ i) cin >> a, num[a] ++;
			for(int i = 1; x >= 0; ++ i) {
				if(num[i] == 0 && x) {
					x --;
					num[i] = 1;
				} else if(num[i] == 0 && x == 0) {
					cout << i - 1 << endl;
					break;
				}
			}
			
		}
	}
	return 0;
}
