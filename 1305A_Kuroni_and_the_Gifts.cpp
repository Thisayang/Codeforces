#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[1010], b[1010];
	while(cin >> t) {
		while(t --) {
			cin >> n;
			for(int i = 0; i < n; i ++) cin >> a[i];
			for(int i = 0; i < n; i ++) cin >> b[i];
			sort(a, a + n);
			sort(b, b + n);
			for(int i = 0; i < n; i ++) cout << a[i] << ' ';
			cout << endl;
			for(int i = 0; i < n; i ++) cout << b[i] << ' ';
			cout << endl;
		}
	}
	return 0;
}
