#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s, t;
	int a, b;
	string x[] = {"sunday", "monday", "tuesday", "wednesday", "thursday",
		"friday",  "saturday"};
	cin >> s >> t;
	if (s == t) cout << "YES" << endl;
	else {
		for (int i = 0; i < 7; ++ i) {
			if (s == x[i]) a = i;
			if (t == x[i]) b = i;
		}
		if ((a + 30) % 7 == b || (a + 31) % 7 == b) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}