#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, b, h[2010];
	while(cin >> n >> a >> b) {
		for(int i = 0; i < n; ++ i) cin >> h[i];
		sort(h, h + n);
		cout << h[b] - h[b - 1] << endl;
	}
	return 0;
}
