#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int a, n, b, ok = 0;
		cin >> a >> n >> b;
		while(a --) {
			printf("%c", 'a' + ok);
			ok ++;
			if(ok % b == 0) ok = 0;
		}
		cout << endl;
	}
	return 0;
}
