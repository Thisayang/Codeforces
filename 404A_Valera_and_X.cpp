#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	string s[310];
	set<char> sett;
	for (int i = 0; i < n; ++ i) {
		cin >> s[i];
	}
	char ch = s[0][0];
	int flg = 0;
	for (int i = 0; i < n; ++ i) {
		for (int j = 0; j < n; ++ j) {
			sett.insert(s[i][j]);
			if (j == i || j == n - 1 - i) {
				if (s[i][j] != ch) {
					flg = 1;
					goto result;
				}
			} else {
				if (s[i][j] == ch) {
					flg = 1;
					goto result;
				}
			}
		}
	}
	if (sett.size() != 2) flg = 1;
	result :
	cout << (flg ? "NO" : "YES") << endl;
	return 0;
}
