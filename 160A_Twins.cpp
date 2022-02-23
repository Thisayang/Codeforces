#include <bits\stdc++.h>
using namespace std;
int main() {
	int t, a[101], sum = 0;
	cin >> t;
	for(int i = 0; i < t; i ++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a + t);
	int ans = 0, i = t - 1, ok = 0;
	while(ans <= sum / 2) {
		ans += a[i];
		ok ++;
		i --;
	}
	cout << ok << endl;
	return 0;
}
