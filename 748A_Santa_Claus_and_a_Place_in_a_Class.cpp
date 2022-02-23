#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, k;
	cin >> n >> m >> k;
	int l = k / (m * 2), d = k % (m * 2);
	if(k % (m * 2)) l ++;
	if(d % 2 == 0) d /= 2;
	else d = d / 2 + 1;
	if(d == 0) d = m;
	cout << l << ' ' << d << ' ';
	if(k & 1) cout << 'L';
	else cout << 'R';
	return 0;
}
