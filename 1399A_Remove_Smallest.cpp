#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int n, a, x[60] = {0};
	scanf("%d", &n);
	while(n --){
		scanf("%d", &a);
		for(int i = 0; i < a; i ++) scanf("%d", &x[i]);
		sort(x, x + a);
		int ok = 0;
		if(a == 1){
			printf("YES\n");
			continue;
		}
		for(int i = 0; i < a - 1; i ++){
			if(x[i + 1] - x[i] > 1){
				printf("NO\n");
				ok = 1;
				break;
			} 
		}
		if(ok == 0) printf("YES\n");
	}
	return 0;
}