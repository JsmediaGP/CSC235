#include <stdio.h>
int main(){
	char name[100];
	printf("Program to print Hello World\n");
	printf("Enter your name: ");
	//scanf("%s", name);
	scanf("%[^\n]%*c", name);

	
	printf("Hello World  %s", name);
	
	
	
	
	return 0;
}



	//scanf("%[^\n]%*name", name); use this to concatinate space