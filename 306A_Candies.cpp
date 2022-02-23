#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	while(cin >> n >> m) {
		while(m) {
			int ans = n / m;
			cout << ans << ' ';
			n -= ans;
			m --;
		}
		cout << endl;
	}
	return 0;
}
