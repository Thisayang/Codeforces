#include <bits\stdc++.h>
#define LL long long
using namespace std;
int temp[200001];
int index[200001];
int main() {
	int t;
	scanf("%d", &t);
	while(t --) {
		int n,tmp;
		scanf("%d", &n);
		memset(temp, 0, sizeof(int) * (n + 1));
		for(int i = 1; i <= n; i ++) {
			scanf("%d", &tmp);
			temp[tmp] ++;
			index[tmp] = i;
		}
		int ans = -1;
		for(int i = 1; i <= n; i ++) {
			if(temp[i] == 1) {
				ans =  index[i];
				break;
			}
		}	
		cout << ans << endl;
	}
	return 0;
}
