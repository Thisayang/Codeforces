#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int cnt = 0, max = 0, ok = 0;
		for(int i = 0; i < n; i ++) {
			if(s[i] == 'A' && ok == 0) ok = 1;
			if(s[i] == 'P' && ok == 1) cnt ++;
			else if(s[i] == 'A' && ok == 1) {
				max = max > cnt ? max : cnt;
				cnt = 0;
			}
		}
		max = max > cnt ? max : cnt;
		cout << max << endl;
	}
	return 0;
}
