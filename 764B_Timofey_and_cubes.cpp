#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[200010];
	while(cin >> n) {
		for(int i = 1; i <= n; ++ i) cin >> a[i];
		for(int i = 1; i <= n / 2; ++ i) {
			if(i & 1) {
				int tmp = a[n - i + 1];
				a[n - i + 1] = a[i];
				a[i] = tmp;
			}
		}
		for(int i = 1; i <= n; ++ i) cout << a[i] << ' ';
		cout << endl;
	}
	return 0;
}
