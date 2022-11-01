#include <stdio.h>

int main(){
	int a,num;
	
	printf("Program to print 1-N numbers\n");
	


	printf("Enter the N number: ");
	scanf("%d", &num);
	
	
	if(num<=0){
	printf("Enter a valid number\n");  
	}else{
	printf("The number from 1 to %d is \n",num );
	for(a=1; a<=num; a++){
			
		printf("%d\n", a);
		}
		
	}
	
	
	
	return 0;
}