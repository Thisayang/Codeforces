#include <bits\stdc++.h>
#define LL long long
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int na, nb, k, m, a[100010], b[100010];
	while(cin >> na >> nb) {
		cin >> k >> m;
		for(int i = 0; i < na; ++ i) cin >> a[i];
		for(int i = 0; i < nb; ++ i) cin >> b[i];
		sort(b, b + nb, cmp);
		if(a[k - 1] < b[m - 1]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
