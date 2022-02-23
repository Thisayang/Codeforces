#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, a[101], s[201] = {0}, ok = 0;
	cin >> n;
	for(int i = 0; i < n; i ++) {
		cin >> a[i];
		s[a[i]] = 1;
	}
	int m, b[101];
	cin >> m;
	for(int i = 0; i < m; i ++) {
		cin >> b[i];
		s[b[i]] = 1;
	}
	for(int i = 0; i < n; i ++) {
		for(int j = 0; j < m; j ++) {
			if(s[a[i] + b[j]] != 1){
				cout << a[i] << ' ' << b[j];
				ok = 1;
				break;
			}
		}
		if(ok == 1) break;
	}
	return 0;
}
