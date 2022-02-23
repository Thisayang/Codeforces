#include <cstdio>
int main(){
	int n;
	scanf("%d", &n);
	while(n --){
		int a, b;
		scanf("%d %d", &a, &b);
		if((a % 2 == 1 && b % 2 == 0)|| a < b){
			printf("NO\n");
			continue;
		}
		printf("YES\n");
		
		
	}
	return 0;
}