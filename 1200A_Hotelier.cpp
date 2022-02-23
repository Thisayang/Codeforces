#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	int n, a[10] = {0};
	cin >> n;
	string str;
	cin >> str;
	for(int i = 0; i < n; i ++) {
		if(str[i] == 'L') {
			for(int i = 0; i < 10; i ++){
				if(a[i] == 0) {
					a[i] = 1;
					break;
				} 
			}
		}
		else if(str[i] == 'R') {
			for(int i = 9; i > -1; i --){
				if(a[i] == 0) {
					a[i] = 1;
					break;
				} 
			}
		}
		else a[str[i] - '0'] = 0;
	}
	for(int i = 0; i < 10; i ++) cout << a[i];
	return 0;
}
