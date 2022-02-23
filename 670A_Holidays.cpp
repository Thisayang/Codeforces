#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	while(cin >> t) {
		int mmin = t / 7 * 2+ max(t % 7 - 5, 0);
		int mmax = t / 7 * 2+ min(t % 7, 2);
		cout << mmin << ' ' << mmax << endl;
	}
	return 0;
}
