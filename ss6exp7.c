#include<stdio.h>
int main(){
	int a;
	float d;
	char ch, name[40];
	printf("please enter the data\n");
	scanf("%d %f %c %f", &a, &d, &ch);
	scanf("%s", name);
	printf("\n the values accepted are :%d,%f,%c,%s",a,d,ch,name);
	
}
