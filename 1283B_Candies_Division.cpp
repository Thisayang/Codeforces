#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k, num;
	while(cin >> t) {
		while(t --) {
			cin >> n >> k;
			num = n / k * k;
			n -= num;
			cout << num + min(n, k / 2) << endl;
		}
	}
	return 0;
}
