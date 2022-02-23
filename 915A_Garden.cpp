#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, a;
	while(cin >> n >> k) {
		int mmin = 110;
		for(int i = 0; i < n; ++ i) {
			cin >> a;
			if(k % a == 0) mmin = min(mmin, k / a);
		}
		cout << mmin << endl;
	}
	return 0;
}
