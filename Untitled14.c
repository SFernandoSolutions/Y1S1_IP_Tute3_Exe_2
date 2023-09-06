//Write a program that inputs one five-digit number, separates the number into its individual
//digits and prints the digits separated from one another.

#include <stdio.h>
int main(void){
//	create variables
	int inpnum, outnum1, outnum2, outnum3, outnum4, outnum5;
	
//	inpunt 5 digit number
	printf("Enter your 5 digit number : ");
	scanf("%d",&inpnum);
	
//	calculation
	outnum1=inpnum/10000;
	outnum2=inpnum/1000%10;
	outnum3=inpnum/100%10;
	outnum4=inpnum/10%10;
	outnum5=inpnum/1%10;
	
//	output 
	printf("Your Number : %d\t\t",outnum1);
	printf("%d\t",outnum2);
	printf("%d\t",outnum3);
	printf("%d\t",outnum4);
	printf("%d\t",outnum5);

	return 0;
}
