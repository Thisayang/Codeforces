#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T, n, s, t;
	cin >> T;
	while(T --) {
		cin >> n >> s >> t;
		int mmin = min(s, t);
		if(mmin < n) cout << n - mmin + 1 << endl;
		else cout << 1 << endl;
	}
	return 0;
}
