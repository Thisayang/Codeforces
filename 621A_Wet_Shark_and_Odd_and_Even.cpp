#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a;
	while(cin >> n) {
		LL sum = 0, min = 1000000000;
		for(int i = 0; i < n; ++ i) {
			cin >> a;
			sum += a;
			if(a & 1 && a < min) min = a;
		}
		if(sum & 1) sum -= min;
		cout << sum << endl;
	}
	return 0;
}
