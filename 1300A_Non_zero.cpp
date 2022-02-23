#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, x, sum = 0, flg = 0;
		cin >> n;
		for(int i = 0; i < n; i ++) {
			cin >> x;
			if(x == 0) flg ++;
			sum += x;
		}
		if(flg == 0 && sum == 0) flg = 1;
		else if(flg == 0 && sum != 0) flg = 0;
		else if(flg + sum == 0) flg = flg + 1;
		else if(flg + sum != 0) flg = flg;
		cout << flg << endl;
	}
	return 0;
}
