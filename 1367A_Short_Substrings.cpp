#include <cstdio>
#include <cstring>
int main() {
	int n;
	scanf("%d", &n);
	while(n --) {
		char str[1001];
		scanf("%s", str);
		printf("%c", str[0]);
		for(int i = 1; i < strlen(str); i += 2) {
			printf("%c", str[i]);
		}
		printf("\n");
	}
	return 0;
}