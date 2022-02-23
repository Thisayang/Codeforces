#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t[5], a[110] = {0}, sum = 0, tmp;
	for(int i = 0; i < 5; i ++) {
		cin >> t[i];
		sum += t[i];
		a[t[i]] ++;
	}
	int Min = sum;
	for(int i = 0; i < 101; ++ i) {
		if(a[i] == 2) tmp = sum - 2 * i;
		else if(a[i] > 2) tmp = sum - 3 * i;
		Min = min(Min, tmp);
	}
	cout << Min;
	return 0;
}
