#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	cin >> s;
	int l = s.length(), low, high;
	if(l & 1) low = l / 2, high = l / 2 + 1;
	else low = l / 2 - 1, high = l / 2;
	for(int i = 0; i < l; ++ i) {
		if(i % 2 == 0) cout << s[low], -- low;
		else cout << s[high], ++ high;
	}
	return 0;
}
