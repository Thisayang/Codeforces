#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, a;
	while(cin >> n >> m) {
		int tmp = 0, ans;
		for(int i = 0; i < n; ++ i) {
			cin >> a;
			tmp += a;
			cout << tmp / m << ' ';
			tmp %= m;
		}
		cout << endl;
	}
	return 0;
}
