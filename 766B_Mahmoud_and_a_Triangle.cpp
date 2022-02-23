#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[300010];
	while(cin >> n) {
		for(int i = 0; i < n; ++ i) cin >> a[i];
		sort(a, a + n);
		int flg = 0;
		for(int i = 0; i < n - 2; ++ i) {
			if(a[i] + a[i + 1] > a[i + 2]) {
				flg = 1;
				break;
			}
		}
		cout << (flg == 1 ? "YES" : "NO") << endl;
	}
	return 0;
}
