#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, d, a[110];
	while(cin >> n >> d) {
		int ans = 2, tmp, last;
		for(int i = 0; i < n; ++ i) cin >> a[i];
		for(int i = 0; i < n; ++ i){
			if(i != 0 && a[i] - a[i - 1] > 2 * d) ans += 2;
			else if(i != 0 && a[i] - a[i - 1] == 2 * d) ans ++;
		}
		cout << ans << endl;
	}
	return 0;
}
