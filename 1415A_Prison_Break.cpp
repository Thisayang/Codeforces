#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, r, c;
	cin >> t;
	while(t --) {
		cin >> n >> m >> r >> c;
		cout << max(abs(n - r), r - 1) + max(abs(m - c), c - 1) << endl;
	}
	return 0;
}
