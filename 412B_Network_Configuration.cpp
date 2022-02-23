#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
bool cmp(int a, int b) {return a > b;}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int  n, k, a[110];
	while(cin >> n >> k) {
		for(int i = 0; i < n; ++ i) cin >> a[i];
		sort(a, a + n, cmp);
		cout << a[k - 1] << endl; 
	}
	return 0;
}
