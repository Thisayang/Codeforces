#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k[110], a;
	while(cin >> n) {
		int mmin = 10000000;
		for(int i = 0; i < n; ++ i) cin >> k[i];
		for(int i = 0; i < n; ++ i) {
			int tmp = 15 * k[i];
			for(int j = 0; j < k[i]; ++ j) cin >> a, tmp += 5 * a;
			mmin = min(mmin, tmp);
		}
		cout << mmin << endl;
	}
	return 0;
}
