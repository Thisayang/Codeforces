#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, x[4] = {0}, sum;
	string s;
	cin >> t >> s;
	for (int i = 0; s[i] != 0; ++ i) {
		if (s[i] == 'U') x[0] ++;
		else if (s[i] == 'D') x[1] ++;
		else if (s[i] == 'L') x[2] ++;
		else x[3] ++;
	}
	sum = min(x[0], x[1]) * 2 + min(x[2], x[3]) * 2;
	cout << sum << endl;
	return 0;
}