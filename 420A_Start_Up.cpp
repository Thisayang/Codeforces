#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	cin >> s;
	int n = s.length(), flg = 0;
	for (int i = 0; i < n; ++ i) {
		if (s[i] != s[n - 1 - i] || s[i] == 'B' || s[i] == 'C' || s[i] == 'D' ||
			s[i] == 'E' || s[i] == 'F' || s[i] == 'G' || s[i] == 'J' || s[i] == 'K' ||
			s[i] == 'L' || s[i] == 'N' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' ||
			s[i] == 'S' || s[i] == 'Z') flg = 1;
	}
	cout << (flg == 0 ? "YES" : "NO") << endl;
	return 0;
}