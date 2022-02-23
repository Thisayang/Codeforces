#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, cnt = 0;
		cin >> n;
		while(n != 1) {
			if(n % 6 == 0) n /= 6;
			else if(n % 3 == 0) n *= 2;
			else if(n % 3 != 0) {
				cnt = -1;
				break;
			}
			cnt ++;
		}
		cout << cnt << endl;
	}
	return 0;
}
