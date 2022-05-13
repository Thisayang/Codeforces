#include <bits\stdc++.h>
#define ll long long int
using namespace std;
bool cmp(ll a, ll b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, a, b, num[100010];
	cin >> t;
	while(t --) {
		cin >> a >> b;
		for(int i = 0; i < a; i ++) {
			cin >> num[i];
		}
		ll cnt = 0, sum = 0;
		sort(num, num + a, cmp);
		for (int i = 0; i < a; ++ i) {
			if (num[i] >= b) {
				cnt ++;
				sum += num[i] - b;
			} else {
				if (num[i] + sum >= b) {
					sum -= (b - num[i]);
					cnt ++;
				} else break;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
