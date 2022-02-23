#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, b[100010];
	while(cin >> n) {
		ll sum = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> a;
			sum += a;
		}
		for(int i = 0; i < n; ++ i) cin >> b[i];
		sort(b, b + n);
		if(b[n - 1] + b[n - 2] < sum) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
