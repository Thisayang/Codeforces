#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, a[1010], x;
	while(cin >> n >> m) {
		memset(a, 0, sizeof(a));
		for(int i = 0; i < m; ++ i) cin >> x, a[x - 1] ++;
		sort(a, a + n);
		cout << a[0] << endl;
	}
	return 0;
}
