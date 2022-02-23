#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, t, a[30001], x = 1;
	cin >> n >> t;
	for(int i = 1; i < n; i ++) cin >> a[i];
	while(x < t) x += a[x];
	if(x == t) cout << "YES";
	else cout << "NO";
	return 0;
}
