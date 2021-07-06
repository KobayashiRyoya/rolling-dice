#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(){
	int i,total=0,Total;
	char name[MAX];
	srand((unsigned int)time(NULL));

	printf("Who are you?\n");
	scanf("%s",name);

	printf("Hello,%s!\n",name);
	printf("Rolling the dice...\n");

	for(i=0;i<2;i++){
		printf("Die%d:",i+1);
		printf("%d\n",Total=rand()%6);
		total=total+Total;
	}

	printf("total:%d\n",total);
	
	if(total>=7){
		printf("You won!\n");
	}	
	else{
		printf("You lost...\n");
	}
}	