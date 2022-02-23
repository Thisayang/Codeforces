#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n,  a[4] = {0}, t;
	while(cin >> n) {
		while(n --) {
			cin >> t;
			a[t] ++;
		}
		int ans = min(a[1] + a[3], min(a[1] + a[2], a[3] + a[2]));
		cout << ans << endl;
	}
	return 0;
}
