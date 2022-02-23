#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int  cnt = 0;
	int min = m > n ? m : n;
	for(int i = 0; i <= min; i ++) {
		for(int j = 0; j <= min; j ++)
			if(i * i + j == n && i + j * j == m) cnt ++;
	}
	cout << cnt;
	return 0;
}
