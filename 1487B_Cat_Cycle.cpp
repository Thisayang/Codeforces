#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	while(cin >> t) {
		while(t --) {
			cin >> n >> k;
			if(n % 2 == 0) cout << (k % n == 0 ? n : k % n) << endl;
			else {
				int tmp = n / 2;
				int ans = n % tmp;
				if(ans == 0) ans = tmp;
				ans += (k / tmp - 1) * tmp;
				k = ans;
				if(k % tmp == 0) k += tmp;
				cout << (k % n == 0 ? n : k % n) << endl;				
			}
		}
	}
	return 0;
}
