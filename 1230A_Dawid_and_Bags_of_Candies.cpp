#include <bits\stdc++.h>
using namespace std;
int main() {
	int a[4], sum = 0, s[100] = {0};
	for(int i = 0; i < 4; i ++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a + 4);
	int flg = a[3], ok = 0;
	if(sum % 2 == 1) cout << "NO";
	else{
		while(flg < sum / 2) {
			flg += a[ok ++];
		}
		if(flg == sum / 2) cout << "YES";
		else cout << "NO";
	}
		
	return 0;
}
