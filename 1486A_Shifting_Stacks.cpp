#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n, a[110];
	cin >> t;
	while(t --) {
		cin >> n;
		for(int i = 0; i < n; ++ i) cin >> a[i];
		bool flg = 0;
		for(ll i = 0; i < n - 1; ++ i) {
			if(a[i] >= i) a[i + 1] += a[i] - i, a[i] = i;
			else {
				flg = 1;
				break;
			}
		}
		if(flg == 0) {
			for(int i = 0; i < n; ++ i) 
				if(a[i] < i) flg = 1;
		}
 		cout << (flg == 0 ? "YES" : "NO") << endl;
	}
	return 0;
}
