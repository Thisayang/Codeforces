#include <bits\stdc++.h>

using namespace std;
int main() {
	int a[51] = {1, 1};
	for(int i = 2; i < 8; i ++) {
		for(int j = 2; i * j <= 50; j ++)
			a[i * j] = 1;
	}
	int n, m, ok = 0;
	cin >> n >> m;
	if(a[m] == 1) ok = 1;
	for(int i = n + 1; i < m; i ++) {
		if(a[i] == 0 && i != m) ok = 1;
	}
	if(ok == 0) cout << "YES";
	else cout << "NO";
	return 0;
}
