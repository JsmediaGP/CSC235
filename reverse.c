#include<stdio.h>
#include<string.h>

int main(){
	
	char txt[100];
	printf("Enter your text: ");
	scanf("%[^\n]*c", txt);
	
	printf("Here is your original statement %s: \n", txt);
	printf("Here is your reversed statement %s: ", strrev(txt));
	
		
}