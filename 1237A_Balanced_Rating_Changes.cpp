#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, tmp;
	cin >> n;
	int flg = 0;
	while (n --) {
		cin >> tmp;
		if (tmp % 2 == 0) cout << tmp / 2 << endl;
		else {
			if (flg % 2 == 0) {
				if (tmp > 0) cout << tmp / 2 + 1 << endl;
				else cout  << tmp / 2 << endl;
			} else {
				if (tmp > 0) cout << tmp / 2 << endl;
				else cout << tmp / 2 - 1 << endl; 
			}
			flg ++;
		}
	}
	return 0;
}