#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[110];
	while(cin >> t) {
		while(t --) {
			cin >> n;
			for(int i = 0; i < n; i ++) cin >> a[i];
			for(int i = 0; i < n; i += 2) {
				int tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp * -1;
			}
			for(int i = 0; i < n; i ++) cout << a[i] << ' ';
			cout << endl;
		}
	}
	return 0;
}
