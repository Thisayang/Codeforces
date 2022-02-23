#include <cstdio>
int main(){
	int n;
	scanf("%d", &n);
	while(n --){
		int m, x[1100];
		scanf("%d", &m);
		for(int i = 0; i < m; i ++) scanf("%d", &x[i]);
		int alice = 0, bob = m - 1, a = 0, b = 0;
		int suma = 0, sumb = 0, ok = 0 , step = 0;
		int i, j;
		while(alice <= bob){
			for(i = alice ; i <= bob && a <= ok; i ++) a += x[i];
			alice = i;
			suma += a;
			step ++;
			ok = a;
			a = 0;
			for(j = bob ; j >= alice && b <= ok; j --) b += x[j];
			bob = j;
			sumb += b;
			if(b != 0) step ++;
			ok = b;
			b = 0;
		}
		printf("%d %d %d\n", step, suma, sumb);
	}
	return 0;
}