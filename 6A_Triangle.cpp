#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a[4];
	while(cin >> a[0] >> a[1] >> a[2] >> a[3]) {
		sort(a, a + 4);
		if(a[1] + a[2] > a[3] || a[0] + a[1] > a[2]) cout << "TRIANGLE" << endl;
		else if(a[1] + a[2] == a[3] || a[0] + a[1] == a[2]) cout << "SEGMENT" << endl;
		else cout << "IMPOSSIBLE" << endl;
	}
	return 0;
}
