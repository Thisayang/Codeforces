#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	LL n, a;
	while(cin >> n) {
		LL sum = 0, flg = 0, ok = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> a;
			if(a == 0) ok ++;
			if(a < 0) {
				sum += -1 - a;
				flg ++;
			}
			else sum += abs(a - 1);
		}
		if(flg & 1 && ok == 0) sum += 2;
		cout << sum << endl;
	}
	return 0;
}
