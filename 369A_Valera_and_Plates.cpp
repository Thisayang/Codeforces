#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, k, a;
	while(cin >> n >> m >> k) {
		int ans = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> a;
			if(a == 1) {
				if(m > 0) m --;
				else ans ++;
			} else {
				if(k > 0) k --;
				else if(m > 0) m --;
				else ans ++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
