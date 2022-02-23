#include <bits\stdc++.h>
using namespace std;
struct dragon{
	int a, b;
};
bool cmp(dragon x, dragon y)
{
	return x.a < y.a;
}
int main() {
	int t, n, ok = 0;
	struct dragon s[1001];
	cin >> t >> n;
	for(int i = 0; i < n; i ++) cin >> s[i].a >> s[i].b;
	sort(s, s + n, cmp);
	for(int i = 0; i < n; i ++){
		if(t > s[i].a) t += s[i].b;
		else{
			ok = 1;
			cout << "NO";
			break;
		}
	}
	if(ok == 0) cout << "YES";
	return 0;
}
