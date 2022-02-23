#include <cstdio>
int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		/*while(n --){
			int a, b, st = 1;
			scanf("%d%d", &a, &b);
			if(b < a){
				printf("%d\n", b);
				continue;
			}
			int x = a - 1;
			int s = (b / x) * a;
			int ok = s + b % (b / x * x);
			if(ok % a == 0) ok --;
			printf("%d\n", ok);
		}*/
		/*
	while(n --){
		int a, b, ok = 0, st = 1;
		scanf("%d%d", &a, &b);
		while(b - ok >= a){
			ok = st * a - st;
			st ++;
			//printf("%d %d %d\n", ok, b - ok, st);
		}
		int i = (st - 1) * a + (b - ok);
		printf("%d\n", i);
	}
	*/
	while(n --){
		int a, b, ok = 0, st = 1;
		scanf("%d%d", &a, &b);
		while(ok < b){
			if(st % a != 0) ok ++;
			st ++;
		}
		printf("%d\n" ,st);
	}
	}
	
	
	return 0;
}