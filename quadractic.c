#include<stdio.h>
#include<math.h>

int main (){
	int a,b,c;
	float root1, root2;
	printf("Enter the value for a \n");
	scanf("%d",&a);
	printf("Enter the value for b \n");
	scanf("%d",&b);
	printf("Enter the value for c \n");
	scanf("%d",&c);
	float det = b*b-4*a*c;
	

	if (det==0){
		
		printf("We have equal roots");
		root1 = -b/(2*a);
		root2 = root1;
		printf("X1 is:%f \n", root1);
		printf("X2 is:%f \n", root2);
		
	}else if(det>0){
	root1 = (-b+sqrt(det))/(2*a);
	root2 = (-b-sqrt(det))/(2*a);
	printf("X1 is:%f \n", root1);
	printf("X2 is:%f \n", root2);
	
	}else{
		
		printf("Error!!! Imaginary Roots");
	}
	
	return 0;
}