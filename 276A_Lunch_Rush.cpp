#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, f, t;
	while(cin >> n >> k) {
		int max = -1000000000, tmp;
		for(int i = 0; i < n; ++ i) {
			cin >> f >> t;
			if(t <= k) tmp = f;
			else tmp = f - (t - k);
			if(max < tmp) max = tmp;
		}
		cout << max << endl;
	}
	return 0;
}
