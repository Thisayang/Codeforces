#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, b;
	cin >> a >> b;
	bool flg = true;
	for(int i = 1; ; ++ i) {
		if(i & 1) {
			if(a >= i) a -= i;
			else break;
		} else {
			if(b >= i) b -= i;
			else {
				flg = false;
				break;
			}
		}	
	}
	if(flg) cout << "Vladik";
	else cout << "Valera";	
	return 0;
}
