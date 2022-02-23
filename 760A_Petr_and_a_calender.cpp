#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int m, d;
	cin >> m >> d;
	if(m == 2){
		if(d == 1) cout << 4;
		else cout << 5;
	}
	else if(m == 4 || m == 6 || m == 9 || m == 11) {
		if(d == 7) cout << 6;
		else cout << 5;
	}
		
	else {
		if(d > 5) cout << 6;
		else cout << 5;
	}
	return 0;
}
