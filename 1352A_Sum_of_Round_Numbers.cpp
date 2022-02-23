#include <cstdio>
int main(){
	int n;
	scanf("%d", &n);
	while(n --){
		int a, num = 0, ok = 1, x[5] = {0};
		scanf("%d", &a);
		while(a){
			if(a % 10 != 0)	x[num ++] = a % 10 * ok;
			ok = ok * 10;
			a /= 10;
		}
		printf("%d\n", num --);
		while(num >= 0) printf("%d ", x[num --]);
		printf("\n");
	}
	return 0;
}