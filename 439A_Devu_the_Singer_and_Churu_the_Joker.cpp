#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, d, a;
	while(cin >> n >> d) {
		int sum = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> a;
			sum += a;
		}
		if(sum + 10 * (n - 1) > d) cout << -1 << endl;
		else cout << (d - sum) / 5 << endl;
	}
	return 0;
}
