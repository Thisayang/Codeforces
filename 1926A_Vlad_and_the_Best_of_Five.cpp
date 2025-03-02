#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		int a = 0;
		int b = 0;
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] == 'A') {
				a++;
			} else {
				b++;
			}
		}
		if (a > b) {
			cout << "A" << endl;
		} else {
			cout << "B" << endl;
		}
	}
	return 0;
}