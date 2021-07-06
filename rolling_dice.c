#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(){
	char name[MAX];
	srand((unsigned int)time(NULL));

	printf("Who are you?\n");
	scanf("%s",name);
	printf("Hello,%s!\n",name);
}	
