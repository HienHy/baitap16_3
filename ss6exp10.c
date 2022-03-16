#include<stdio.h>
int main(){
	char line[80];
	printf("enter character : ");
	scanf("%[^\n]",line);
	printf("%s", line);
	
}
