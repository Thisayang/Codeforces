#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[1010];
	while(cin >> n) {
		for(int i = 0; i < n; ++ i) cin >> a[i];
		sort(a, a + n);
		for(int i = n - 1; i >= 0; -- i) {
			int tmp = sqrt(a[i]);
			if(tmp * tmp == a[i]) continue;
			cout << a[i] << endl;
			break;
		}
	}
	return 0;
}