#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s;
	cin >> n >> s;
	int sum = n;
	for(int i = 0; i < n; ++ i) {
		if(s[i] == 'R' && s[i + 1] == 'U') ++ i, -- sum;
		else if(s[i] == 'U' && s[i + 1] == 'R') ++ i, -- sum;
	}
	cout << sum;
	return 0;
}
