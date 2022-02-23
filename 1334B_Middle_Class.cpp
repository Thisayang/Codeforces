#include <bits\stdc++.h>
using namespace std;
int main() {
	int t, a, b, num[1001];
	cin >> t;
	while(t --) {
		cin >> a >> b;
		int sum = 0;
		for(int i = 0; i < a; i ++) {
			cin >> num[i];
			sum += num[i];
		}
		sort(num, num + a);
		int i = 0;
		while(sum / a < b  && a > 0) {
			a --;
			sum -= num[i ++];	
		}
		cout << a << endl;
	}
	return 0;
}
