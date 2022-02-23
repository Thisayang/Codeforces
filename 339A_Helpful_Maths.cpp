#include <cstdio>
#include <cstring>
int main(){
	char s[101];
	scanf("%s", s);
	int a = 0 , x[4] = {0};
	for(int i = 0; s[i] != 0; i ++){
		if(s[i] == '+') a++;
		else x[s[i] - '0'] ++;
	}
	int j = strlen(s);
	while(j > 0){
		if(j % 2 == 1){
			if(x[1] != 0){
				printf("1");
				x[1] --;
			}
			else if(x[2] != 0){
				printf("2");
				x[2] --;
			}
			else if(x[3] != 0){
				printf("3");
				x[3] --;
			}
		}
		else printf("+");
		j --;
	}
	printf("\n");
	return 0;
}