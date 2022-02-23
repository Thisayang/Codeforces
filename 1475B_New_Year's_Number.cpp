#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int  t, n;
	while(cin >> t) {
		while(t --) {
			cin >> n;
			if(n % 2020 <= n / 2020) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}
