#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, c, d;
	while(cin >> t) {
		while(t --) {
			cin >> a >> b >> c >> d;
			cout << max(a + b, c + d) << endl;
		}
	}
	return 0;
}
