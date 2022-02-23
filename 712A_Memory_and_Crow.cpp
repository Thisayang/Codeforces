#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n,a[100010];
	cin >> n;
	for(int i = 0; i < n; ++ i) cin >> a[i];
	for(int i = 1; i < n; ++ i) cout << a[i - 1] + a[i] << ' ';
	cout << a[n - 1];
	return 0;
}
