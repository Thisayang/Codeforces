#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		if (s.length() > 2 && s[0] == '1' && s[1] == '0') {
			if (s[2] == '0' || (s.length() == 3 && s[2] == '1')) {
				cout << "NO" << endl;
			} else {
				cout << "YES" << endl;
			}
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}