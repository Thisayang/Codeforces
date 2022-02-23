#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a;
	while(cin >> n) {
		while(n --) {
			cin >> a;
			if(a % 3 <= a / 3 / 2) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}
