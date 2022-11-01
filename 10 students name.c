#include<stdio.h>

int main(){
	
	int i,j= 10;
	char stn[100];
	
	printf("Program to accept 10 students name\n");
	
	for(i=1; i<=j; i++){
	
	printf("Enter your name: ");
	//scanf("%s", stn);
	scanf("%[^\n]%*c", stn);

	
	printf("%d Your name is: %s\n", i, stn);
	
	
}	
	return 0;
}