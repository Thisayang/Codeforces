#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[110];
	cin >> t;
	while(t --) {
		cin >> n;
		int MaxN = 0, MinN = 0;
		for(int i = 1; i <= n; ++ i) {
			cin >> a[i];
			if(a[i] == n) MaxN = i;
			if(a[i] == 1) MinN = i;
		}
		int maxn = max(MaxN, MinN);
		int minn = min(MaxN, MinN);
		cout <<min(n - minn + 1, min(maxn,minn + n - maxn + 1)) << endl;
	}
	return 0;
}
