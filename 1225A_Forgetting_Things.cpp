#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int da, db;
	while(cin >> da >> db) {
		if(da == 9 && db == 1) cout << 9 << ' ' << 10 << endl;
		else if(db - da > 1 || da > db) cout << -1 << endl;
		else if(da == db) cout << da * 10 + da - 1 << ' ' << da * 10 + da << endl;
		else cout << da << ' ' << db << endl;
	}
	return 0;
}
