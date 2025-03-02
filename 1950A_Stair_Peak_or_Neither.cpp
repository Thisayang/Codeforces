#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	int a;
	int b;
	int c;
	while (t--) {
		cin >> a >> b >> c;
		if (b > a) {
			if (c > b) {
				cout << "STAIR" << endl;
			} else if (b > c) {
				cout << "PEAK" << endl;
			} else {
				cout << "NONE" << endl;
			}
		} else {
			cout << "NONE" << endl;
		}
	}
}