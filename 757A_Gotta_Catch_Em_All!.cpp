#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	cin >> s;
	int a[20] = {0};
	for (int i = 0; s[i] != 0; ++ i) {
		if (s[i] == 'B') a[0] ++;
		else if (s[i] == 'u') a[1] ++;
		else if (s[i] == 'l') a[2] ++;
		else if (s[i] == 'b') a[3] ++;
		else if (s[i] == 'a') a[4] ++;
		else if (s[i] == 's') a[5] ++;
		else if (s[i] == 'r') a[6] ++;
	}
	a[1] /= 2;
	a[4] /= 2;
	int mn = a[0];
	for (int i = 1; i < 7; ++ i) {
		mn = min(mn, a[i]);
	}
	cout << mn << endl;
	return 0;
}