#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int a, s[1001], min = 1000;
		cin >> a;
		for(int i = 0; i < a; i ++) cin >> s[i];
		sort(s, s + a);
		for(int i = 0; i < a - 1; i ++) 
			if(min > abs(s[i] - s[i + 1]))  
				min = abs(s[i] - s[i + 1]);
		cout << min << endl;
	}
	return 0;
}