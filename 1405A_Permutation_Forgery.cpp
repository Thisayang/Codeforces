#include <bits\stdc++.h>
using namespace std;
int main() {
	int t, n, a[101];
	cin >> t;
	while(t --) {
		cin >> n;
		for(int i = 0; i < n; i ++) cin >> a[i];
		for(int i = n - 1; i > -1; i --) cout << a[i] << ' ';
		cout << endl;
	}
	return 0;
}
