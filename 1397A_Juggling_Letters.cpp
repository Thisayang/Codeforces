#include <bits\stdc++.h>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	string s[1001];
	while(t --) {
		cin >> n;
		int a[26] = {0}, ok = 0;
		for(int i = 0; i < n; i ++) {
			cin >> s[i];
			for(int j = 0; j < s[i].length(); j ++) a[s[i][j] - 'a'] ++;
		}
		for(int i = 0; i < 26; i ++) {
			if(a[i] % n != 0) {
				cout << "NO" << endl;
				ok = 1;
				break;
			}
		}
		if(ok == 0) cout << "YES" << endl;
	}
	return 0;
}
