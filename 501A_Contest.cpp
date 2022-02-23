#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, b, c, d;
	while(cin >> a >> b >> c >> d) {
		int p1 = max(3 * a / 10, a - a / 250 * c);
		int p2 = max(3 * b / 10, b - b / 250 * d);
		if(p1 > p2) cout << "Misha" << endl;
		else if(p1 < p2) cout << "Vasya" << endl;
		else cout << "Tie" << endl;
	}
	return 0;
}
