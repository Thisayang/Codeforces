#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, l, r;
	while(cin >> n >> l >> r) {
		int min = 0, max = 0, sum = 1;
		for(int i = 0; i < l; ++ i) {
			min += sum;
			sum *= 2;
		}
		min	+= (n - l), sum = 1;
		for(int i = 0; i < r; ++ i) {
			max += sum;
			sum *= 2;
		}
		max	+= (n - r) * sum / 2;
		cout << min << ' ' << max << endl;
	}
	return 0;
}
