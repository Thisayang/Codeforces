#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, x = 0, y = 0;
	cin >> t;
	while(t --) {
		cin >> a >> b;
		if(a > 0) x ++;
		else if(a < 0) y ++;
	}
	if(x > 1 && y > 1) cout << "NO";
	else cout << "YES";
	return 0;
}
