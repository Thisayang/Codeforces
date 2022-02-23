#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	while(cin >> t) {
		while(t --) {
			cin >> n;
			int cnt = n / 4;
			if(n % 4 != 0) cnt ++;
			int ans = n - cnt;
			while(ans --) cout << 9;
			while(cnt --) cout << 8;
			cout << endl;
		}
	}
	return 0;
}
