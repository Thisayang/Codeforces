#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int h, m, x;
	char c;
	while(cin >> h >> c >> m) {
		cin >> x;
		int th = x / 60, tm = x % 60;
		m += tm;
		h += m / 60, m %= 60;
		h += th;
		h %= 24;
		if(h < 10) cout << 0;
		cout << h << ':';
		if(m < 10) cout << 0;
		cout << m << endl;
	}
	return 0;
}
