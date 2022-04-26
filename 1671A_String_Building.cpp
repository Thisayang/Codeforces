#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s;
	cin >> t;
	while (t --) {
		cin >> s;
		int flg = 0;
		for (int  i = 0, j; s[i] != 0; ) {
			int cnt = 1;
			for (j = i + 1; s[j] == s[i] && s[j] != 0; ++ j) {
				cnt ++;
			}
			i = j;
			if (cnt == 1) {
				flg = 1;
				break;
			}
		}
		cout << (flg == 1 ? "NO" : "YES") << endl;
	}
	return 0;
}