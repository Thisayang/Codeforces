#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, k;
	while(cin >> t) {
		while(t --) {
			cin >> n >> m >> k;
			if(m <= n / k) cout << m << endl;
			else cout << n / k - (m - n / k + k - 2) / (k - 1) << endl;
		}
	}
	return 0;
}
