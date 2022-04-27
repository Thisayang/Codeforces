#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, b;
	int x[] = {0, 1, 2, 3, 4, 5, 10, 11, 12, 13, 14, 15, 20, 21, 22, 23};
	int y[] = {0, 10, 20, 30, 40, 50, 1, 11, 21, 31, 41, 51, 2, 12, 22, 32};
	scanf("%d:%d", &a, &b);
	if (a == 23 && b >= 32) cout << "00:00" << endl;
	else {
		for (int i = 0; i < 16; ++ i) {
			if (x[i] == a && b < y[i]) {
				if (x[i] < 10) cout << "0";
				cout << x[i] << ":";
				if (y[i] < 10) cout << "0";
				cout << y[i] << endl;
				break;
			} else if (x[i] == a && b >= y[i]) {
				if (x[i + 1] < 10) cout << "0";
				cout << x[i + 1] << ":";
				if (y[i + 1] < 10) cout << "0";
				cout << y[i + 1] << endl;
				break;
			} else if (x[i] > a) {
				if (x[i] < 10) cout << "0";
				cout << x[i] << ":";
				if (y[i] < 10) cout << "0";
				cout << y[i] << endl;
				break;
			}
		}
	}
	return 0;
}