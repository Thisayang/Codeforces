#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a;
	while(cin >> n) {
		int Min = 1000000001, Max = -1, minnum = 0, maxnum = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> a;
			if(a > Max) Max = a, maxnum = 1;
			else if(a == Max) maxnum ++;
			if(a < Min) Min = a, minnum = 1;
			else if(a == Min) minnum ++;
		
		}
		if(n < 3) cout << 0 << endl;
		else cout << max(0, n - minnum - maxnum) << endl;
	}
	return 0;
}
