#include <bits/stdc++.h>

using namespace std;

void Solve(int n)
{
	long long ans[4] = {0};
    long long l = 1;
	long long r = n;
    long long m;
	while(l < r){
		m = (l + r + 1) / 2;
		if (m * (2 * m - 1) > n) {
            r = m - 1;
        } else {
            l = m;
        }
	}
	printf("%d %d %d\n", l, r, m);
	if(l % 2){
		ans[0] = (l + 1) / 2 * l;
		ans[2] = (n + 1) / 2 - ans[0];
		ans[1] = (l + 1) / 2 * (l - 1);
		ans[3] = n / 2 - ans[1];
	} else {
		ans[2] = l / 2 * l;
		ans[0] = (n + 1) / 2 - ans[2];
		ans[3] = (l + 1) / 2 * (l + 1);
		ans[1] = n / 2 - ans[3];
	} 
	printf("%lld %lld %lld %lld\n", ans[0], ans[1], ans[2], ans[3]);
}
int main()
{
	int t;
        int n;
	scanf("%d",&t);
	while (t--) {
                scanf("%d", &n);
                Solve(n);
        }
	return 0;
}