#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ax, ay, bx, by, cx, cy, flg = 0;
	cin >> n >> ax >> ay >> bx >> by >> cx >> cy;
	if ((bx < ax && cx > ax) || (by < ay && cy > ay) || (bx > ax && cx < ax) || (by > ay && cy < ay)) {
		cout << "NO" << endl;
	} else cout << "YES" << endl;
	return 0;
}