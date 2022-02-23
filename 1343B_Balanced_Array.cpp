#include <cstdio>
int main(){
	int n, a;
	scanf("%d", &n);
	while(n --){
		scanf("%d", &a);
		int sum = 0;
		if(a % 4 != 0) printf("NO\n");
		else{
			printf("YES\n");
			for(int i = 1 ; i <= a / 2; i ++){
				sum += i * 2;
				printf("%d ", i * 2);
			}
			for(int i = 0; i < a / 2 - 1; i ++){
				printf("%d ", 2 * i + 1);
				sum -= 2 * i + 1;
			}
			printf("%d\n", sum);
		}
	}
	return 0;
}