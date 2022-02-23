#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int h1, m1, h2, m2;
	char a;
	while(cin >> h1 >> a >> m1 >> h2 >> a >> m2) {
		int m = m1 - m2;
		if(m < 0) {
			m = (m + 60) % 60;
			h1 --;
		}
		int h = h1 - h2;
		if(h < 0) h = (h + 24) % 24;
		if(h < 10) cout << 0;
		cout << h << ':';
		if(m < 10) cout << 0;
		cout << m << endl;
	}
	return 0;
}
