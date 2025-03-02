#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		cout << s[0] + s[1] - 2 * '0' << endl;
	}
	return 0;
}