#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[100010], Min, Max;
	cin >> n;
	for(int i = 0; i < n; ++ i) cin >> a[i];
	for(int i = 0; i < n; ++ i) {
		if(i == 0) cout << abs(a[i] - a[i + 1]) << ' ' << abs(a[i] - a[n - 1]);
		else if(i == n - 1) cout << abs(a[i] - a[i - 1]) << ' ' << abs(a[i] - a[0]);
		else {
			Min = min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));
			Max = max(abs(a[i] - a[0]), abs(a[i] - a[n - 1]));
			cout << Min << ' ' << Max;
		}
		cout << endl;
	}
	return 0;
}
