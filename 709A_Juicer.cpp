#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, b, d, a;
	while(cin >> n >> b >> d) {
		int sum = 0, ans = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> a;
			if(a <= b) sum += a;
			if(sum > d) ans ++, sum = 0;
		}
		cout << ans << endl;
	}
	return 0;
}
