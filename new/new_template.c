#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main {
	char string[5];
	scanf("%s", string);

	int n;
	long t;
	scanf("%d%ld", &n, &t);

	printf("String: %s, Int: %d, Long: %ld\n", string, n, t);

	return 0;
}
