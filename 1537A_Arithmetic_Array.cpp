#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[50];
	cin >> t;
	while(t --) {
		cin >> n;
		int sum = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> a[i];
			sum += a[i];
		}
		if(sum == n) cout << 0 << endl;
		else if(sum > n) cout << sum - n << endl;
		else cout << 1 << endl;
	}
	return 0;
}
