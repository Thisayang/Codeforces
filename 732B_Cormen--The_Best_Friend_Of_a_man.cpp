#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, a[500];
	while(cin >> n >> k) {
		for(int i = 0; i < n; ++ i) cin >> a[i];
		int sum = 0;
		for(int i = 1; i < n; ++ i) {
			if(a[i] + a[i - 1] < k) {
				sum += k - (a[i] + a[i - 1]);
				a[i] += k - (a[i] + a[i - 1]);
			}
		}
		cout << sum << endl;
		for(int i = 0; i < n; ++ i) cout << a[i] << ' ';
		cout << endl;
	}
	return 0;
}
