#include <bits\stdc++.h>
using namespace std;
int main() {
	int q;
	cin >> q;
	while(q --) {
		long long n, cnt = 0;
		cin >> n;
		while(n != 1) {
			if(n % 2 == 0) n = n / 2;
			else if(n % 3 == 0) n = n * 2 / 3;
			else if(n % 5 == 0) n = n * 4 / 5;
			else{
				cnt = -1;
				break;
			}
			cnt ++;
		}
		cout << cnt << endl;
	}
	return 0;
}
