#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while(t --) {
		cin >> n;
		int ans = 4 * n;
		for(int i = ans; n --; i -= 2) {
			cout << i << ' ';
		}
		cout << endl;
	}
	return 0;
}
