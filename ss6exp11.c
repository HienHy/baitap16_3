#include<stdio.h>
int main(){
	char item[20];
	int partno;
	float cost;
	printf("please enter the data\n");
	scanf("%s", item);
	scanf("%*d", &partno);
	scanf("%f", &cost);
	printf("\nthe values accepted are : %s,%d,%f",item,partno,cost);
	
}
