#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	srand((unsigned int)time(NULL));
	int d1 = rand() % 6 + 1;
	int d2 = rand() % 6 + 1;
	char s[256];

	printf("\nWhat is your name?\n> ");
	scanf("%s", s);
	printf("Hello, %s!\n\n");

	printf("Rolling the dice...\n");
	printf("Die 1: %d\n", d1);
	printf("Die 2: %d\n", d2);
	printf("Total value: %d\n", d1 + d2);

	return 0;
}