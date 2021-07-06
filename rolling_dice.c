#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(){
	int i,total=0,Total;
	srand((unsigned int)time(NULL));

	printf("Rolling the dice...\n");

	for(i=0;i<2;i++){
		printf("Die%d:",i+1);
		printf("%d\n",Total=rand()%6);
		total=total+Total;
	}

	printf("total:%d\n",total);
}	
