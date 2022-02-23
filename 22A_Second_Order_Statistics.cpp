#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110], ok;
	bool flg = false;
	cin >> n;
	for(int i = 0; i < n; ++ i) cin >> a[i];
	sort(a, a + n);
	for(int i = 1; i < n; ++ i) {
		if(a[i] > a[0]) {
			ok = a[i];
			flg = ! flg;
			break;
		}
	}
	if(flg) cout << ok;
	else cout << "NO";
	return 0;
}
