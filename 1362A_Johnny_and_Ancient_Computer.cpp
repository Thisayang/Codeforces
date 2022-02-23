#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, a, b;
	while(cin >> t) {
		while(t --) {
			cin >> a >> b;
			ll Min = min(a, b), Max = max(a, b);
			ll tmp = Max / Min;
			while(tmp % 2 == 0) tmp /= 2;
			if(Max % Min != 0 || tmp != 1) cout << -1 << endl;
			else {
				int sum = 0;
				while(Min < Max) {
					Min *= 8;
					sum ++;
				} 
				cout << sum << endl;
			}
		}
	}
	return 0;
}
