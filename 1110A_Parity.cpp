#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int b, k, a;
	while(cin >> b >> k) {
		LL ans = 0;
		for(int i = 1; i < k; ++ i) {
			cin >> a;
			ans += a;
		}
		cin >> a;
		if((b & 1) && (((ans % 2 == 0) && (a & 1)) || ((ans & 1) && (a % 2 == 0)))) cout << "odd" << endl;
		else if(b % 2 == 0 && (a & 1)) cout << "odd" << endl;
		else cout << "even" << endl;
	}
	return 0;
}
