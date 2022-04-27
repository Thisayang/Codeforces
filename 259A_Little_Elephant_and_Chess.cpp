#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s[10];
	int flg = 0;
	for (int i = 0; i < 8; ++ i) {
		cin >> s[i];
		if (s[i] != "WBWBWBWB" && s[i] != "BWBWBWBW") {
			flg = 1;
		}
	}
	cout << (flg == 1 ? "NO" : "YES") << endl;
	return 0;
}