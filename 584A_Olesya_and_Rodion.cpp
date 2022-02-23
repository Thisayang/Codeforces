#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, t;
	char s[101];
	cin >> n >> t;
	if(t != 10) {
		for(int i = 0; i < n; i ++) s[i] = '0' + t;
		for(int i = 0; i < n; i ++) cout << s[i];
	}
	else {
		if(n == 1) cout << "-1";
		else {
			s[0] = '1';
			for(int i = 1; i < n; i ++) s[i] = '0';
			for(int i = 0; i < n; i ++) cout << s[i];
		}
	}
	return 0;
}
