#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, b;
	while(cin >> n)  {
		while(n --) {
			cin >> a >> b;
			int ans = 0;
			while(a && b) {
				if(a > b) {
					ans += a / b;
					a = a % b;
				} else {
					ans += b / a;
					b = b % a;
				}
			}
			cout << ans << endl;
		}
	}
	return 0;
}
