#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, x, sum;
	while(cin >> n) {
		sum = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> x;
			sum += x;
		}
		cout << sum / n << endl;
	}
	return 0;
}
