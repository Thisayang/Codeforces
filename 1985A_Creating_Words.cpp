#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	string a, b;
	char ch;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		ch = a[0];
		a[0] = b[0];
		b[0] = ch;
		cout << a << " " << b << endl;
	}
	return 0;
}