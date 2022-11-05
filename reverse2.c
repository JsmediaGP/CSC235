#include <stdio.h>
#include <string.h>

int main(){



char txt[800], temp;
int i=0,j=0;
printf("PROGRAM TO REVERSE A STATEMENT\n");
printf("______________________________\n");
printf("Enter your Sentence: ");
scanf("%[^c\n]%*c", &txt);


j = strlen (txt)-1;
while (i<j){
	
	temp = txt[j];
	txt[j] = txt[i];
	txt[i] = temp;
	i++;
	j--;
	
}
printf("The Reversed Sentence is: %s\n",txt );
}