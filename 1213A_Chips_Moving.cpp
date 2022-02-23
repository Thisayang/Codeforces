#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, x, y;
	while(cin >> n) {
		x = 0, y = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> a;
			if(a & 1) x ++;
			else y ++;
		}
		cout << (x > y ? y : x) << endl;
	}
	return 0;
}
