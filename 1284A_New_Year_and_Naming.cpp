#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, m;
	string s[21], str[21];
	cin >> n >> m;
	for(int i = 1; i <= n; i ++) cin >> s[i];
	for(int i = 1; i <= m; i ++) cin >> str[i];
	int q;
	cin >> q;
	while(q --) {
		int y;
		cin >> y;
		if(y % n == 0) cout << s[n];
		else cout << s[y % n];
		if(y % m == 0) cout << str[m] << endl;
		else cout << str[y % m] << endl;
	}
	return 0;
}
