#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, b, c, n, x, sum = 0;
	cin >> a >> b >> c >> n;
	for(int i = 0; i < n; ++ i) {
		cin >> x;
		if(x < c && x > b) sum ++;
	}
	cout << sum;
	return 0;
}
