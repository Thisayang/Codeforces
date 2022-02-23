#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	//ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ok = 0, max = 0;
	string s;
	cin >> n;
	getchar();
	getline(cin, s);
	for(int i = 0; i < n; ++ i) {
		if(s[i] >= 'A' && s[i] <= 'Z') ok ++;
		else if(s[i] == ' ') {
			max = max > ok ? max : ok;
			ok = 0;
		}
	}
	max = max > ok ? max : ok;
	cout << max;
	return 0;
}
