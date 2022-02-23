#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	LL t, n;
	while(cin >> t) {
		while(t --) {
			cin >> n;
			LL sum = (n * n + n) / 2, tmp = 1;
			while(tmp <= n) {
				sum -= 2 * tmp;
				tmp *= 2;
			}
			cout << sum << endl;
		}
	}
	return 0;
}
