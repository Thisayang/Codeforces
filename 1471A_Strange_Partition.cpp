#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	LL t, n, k, a;
	while(cin >> t) {
		while(t --) {
			cin >> n >> k;
			LL sum = 0, min, max = 0;
			for(int i = 0; i < n; ++ i) {
				cin >> a;
				sum += a;
				if(a % k == 0) max += a / k;
				else max += a / k + 1;
			}
			if(sum % k == 0) min = sum / k;
			else min = sum / k + 1;
			cout << min << ' ' << max << endl;
		}
	}
	return 0;
}
