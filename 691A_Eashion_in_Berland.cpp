#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[1010], cnt = 0;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
		if(a[i] == 1) cnt ++;
	}
	if ((n == 1 && cnt == 1) || (n - cnt == 1 && n != 1))cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}