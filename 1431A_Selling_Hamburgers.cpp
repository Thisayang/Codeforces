#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	LL t, n, a[110];
	while(cin >> t) {
		while(t --) {
			cin >> n;
			for(int i = 0; i < n; ++ i) cin >> a[i];
			sort(a, a + n);
			LL max = 0;
			for(int i = n - 1; i > -1; -- i) {
				LL tmp = (n - i) * a[i];
				max = max > tmp ? max : tmp;
			}
			cout << max << endl;
		}
	}
	return 0;
}
