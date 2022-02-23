#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while(t --) {
		unsigned x, y;
		cin >> x >> y;
		cout << (x ^ y) << endl;
	}
	return 0;
}
