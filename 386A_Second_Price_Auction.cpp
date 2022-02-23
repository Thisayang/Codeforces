#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[1010];
	while(cin >> n) {
		int max = 0, maxnum = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> a[i];
			if(max < a[i]) max = a[i], maxnum = i + 1;
		}
		sort(a, a + n);
		cout << maxnum << ' ' << a[n - 2] << endl;
	}
	return 0;
}
