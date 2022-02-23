#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int a[101] = {0};
		int n, m, num, tmp, ok = 0;
		cin >> n >> m;
		num = n + m;
		while(num --) {
			cin >> tmp;
			a[tmp] ++;
		}
		for(int i = 1; i < 101; i ++)
			if(a[i] == 2) ok ++;
		cout << ok << endl;
	}
	return 0;
}
