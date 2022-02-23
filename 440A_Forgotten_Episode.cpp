#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	LL n;
	while(cin >> n) {
		LL sum = (n * n + n) / 2, x;
		for(int i = 1; i < n; ++ i) {
			cin >> x;
			sum -= x;
		}
		cout << sum << endl;
	}
	return 0;
}
