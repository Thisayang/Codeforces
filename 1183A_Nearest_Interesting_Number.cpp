#include <bits\stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	for(int i = n; i < 1004; i ++) {
		int tmp = i, sum = 0;
		while(tmp > 0){
			sum += tmp % 10;
			tmp /= 10;
		}
		if(sum % 4 == 0) {
			cout << i;
			break;
		}
	}
	
	return 0;
}
