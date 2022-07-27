#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	int flg = 0;
	cin >> s;
	int len = s.length();
	for (int i = 0; i < len - 1; ++ i) {
		if (s[i] == '0' && flg == 0) {
			flg = 1;
		} else cout << s[i];
	}
	if (flg == 1) cout << s[len - 1];
	cout << endl;
	return 0;
}