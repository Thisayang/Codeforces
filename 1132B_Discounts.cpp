#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int n, a[300010], m, q;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	while(cin >> n) {
		ll sum = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> a[i];
			sum += a[i];
		}
		sort(a, a + n, cmp);
		cin >> m;
		while(m --) {
			cin >> q;
			cout << sum - a[q - 1] << endl;
		}
	}
	return 0;
}
