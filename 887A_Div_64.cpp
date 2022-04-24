#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	int a[2] = {0}, flg = 0, cnt = 0;
	cin >> s;
	for (int i = 0; s[i] != 0; ++ i) {
		if (s[i] == '1') {
			for (int j = i + 1; s[j] != 0; ++ j) {
				if (s[j] == '0') cnt ++;
			}
			if (cnt >= 6) flg = 1;
			break;
		}
	}
	cout << (flg == 1 ? "YES" : "NO") << endl;
	return 0;
}