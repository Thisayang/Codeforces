#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, s, x;
	while(cin >> t >> s >> x) {
		if(x >= t && ((x - t) % s == 0 || ((x - (t + 1)) % s == 0 && x != t + 1))) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
