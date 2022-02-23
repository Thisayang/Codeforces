#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n, a[10010];
	cin >> t;
	while(t --) {
		cin >> n;
		ll max = 0, min = 1000000000;
		for(int i = 0; i < n; ++ i) {
			cin >> a[i];
			if(max < a[i]) max = a[i];
			if(min > a[i]) min = a[i];
		}
		cout << max - min << endl;
	}
	return 0;
}
