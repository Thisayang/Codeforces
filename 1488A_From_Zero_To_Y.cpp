#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, x, y;
	while(cin >> t) {
		while(t --) {
			ll a[20] = {1, 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
			cin >> x >> y;
			int sum = 0;
			for(int i = 1; i < 11; ++ i) a[i] = a[i] * x;
			while(y > 0) {
				for(int i = 10; i >= 0; -- i) {
					if(y >= a[i]) {
						y -= a[i];
						break;
					}
				}
				sum ++;
			}
			cout << sum << endl;
		}
	}
	return 0;
}
