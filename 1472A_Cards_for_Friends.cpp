#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, w, h, n;
	while(cin >> t) {
		while(t --) {
			cin >> w >> h >> n;
			int sum = 1;
			while(sum < n) {
				if(w % 2 == 0) sum *= 2, w /= 2;
				else if(h % 2 == 0) sum *= 2, h /= 2;
				else break;
			}
			cout << (sum >= n ? "YES" : "NO") << endl;
		}
	}
	return 0;
}
