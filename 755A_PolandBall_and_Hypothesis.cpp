#include <bits\stdc++.h>
#define LL long long
using namespace std;
bool a[1000010] = {1, 1};
int main() {
	for(int i = 2; i < 1000; i ++) {
		if(a[i]) continue;
		for(int j = 2; i * j <= 1000010; j ++) a[i * j] = 1;
	}
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	while(cin >> n) {
		for(int i = 1; i < 1001; i ++) {
			if(a[n * i + 1]){
				cout << i;
				break;
			}
		}
	}
	return 0;
}
