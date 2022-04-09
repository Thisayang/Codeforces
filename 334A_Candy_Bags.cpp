#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	ll sum = n * n;
	ll st = 1, end = sum;
	for (int i = 0; i < n; ++ i) {
		for (int j = 0; j < n / 2; ++ j) {
			cout << st << " ";
			st ++;
		}
		for (int j = 0; j < n / 2; ++ j) {
			cout << end << " ";
			end --;
		}
		cout << endl;
	}
	return 0;
}