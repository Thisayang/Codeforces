#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, a[110], b[110][2];
	cin >> n;
	for(int i = 1; i <= n; ++ i) cin >> a[i];
	cin >> m;
	for(int i = 0; i < m; ++ i) {
		cin >> b[i][0] >> b[i][1];
		if(b[i][0] != 1) a[b[i][0] - 1] += (b[i][1] - 1);
		if(b[i][0] != n) a[b[i][0] + 1] += (a[b[i][0]] - b[i][1]);
		a[b[i][0]] = 0;
	}
	for(int i = 1; i <= n; ++ i) cout << a[i] << endl;
	return 0;
}
