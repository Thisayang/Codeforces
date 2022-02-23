#include <cstdio>
int main(){
	int n, a;
	scanf("%d", &n);
	while(n --){
		scanf("%d", &a);
		printf("%d\n", (a - 1) / 2);
	}
	return 0;
}