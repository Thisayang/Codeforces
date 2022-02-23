#include <bits\stdc++.h>
bool cmp(int a, int b){
	return a > b; 
}
using namespace std;
int main() {
	int k, s[15], flg = 0, ans = 0;
	cin >> k;
	for(int i = 0; i < 12; i ++) cin >> s[i];
	sort(s, s + 12, cmp);
	while(flg < k && ans < 12) {
		flg += s[ans];
		ans ++;
	}
	if(ans == 12 && flg < k) ans = -1;
	cout << ans;
	return 0;
}
