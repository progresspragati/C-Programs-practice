#include <stdio.h>
void is3den(int n){
	if(n%3==0){
		printf("%d is divisible by 3 = true\n\n",n);
	}
	else if(n%3!=0){
		for(;n>9 && n%10!=3;){
			n=n/10;
		}
		 if(n%10==3){
		printf("%d have 3 as a digit = true\n\n",n);
		}
		else{
		printf("%d have 3 as a digit = false\n\n",n);	
		}
	
	}
}
void sumDigits(int n){
	int x = 0;
	int y = n;
	for( ;n>9; ){
		x = x + n%10;
		n=n/10;
	}
	printf("sum of digits of %d = %d\n\n",y,x+n);
}
void findDigitCount(int n, int d){
	int x = n;
	int counter = 0;
	for( ;n>9; ){
		if(n%10==d){
			counter++;
		}
		n = n/10;
	}
	if(n==d){
		counter = counter+1;
	}
    	printf("a digits comes in %d = %d times\n\n",x,counter);
}
void largestDigit(int n){
	int y = n;
	int x = n;
	for( ;n>9; ){
		n = n/10;
		if(x%10 > n%10){
			x = x%10;
		}
		else{
			x = n%10;
		}
	}
	printf("largest digit of  %d is = %d\n\n",y,x);
}
void firstDigit(int n){
	int x = n;
	for( ;n>9; ){
		n = n/10;
	}
	printf("first digit of %d is = %d\n\n",x,n);
}




void main(){
   	int n;
	int d;
	int x;
	printf("enter 1 to know the number is divisible by 3 or have 3 as a digit\nenter 2 to get sum of digits of a number\nenter 3 to know how many times a digit comes in the number\nenter 4 to find largest digit in the number\nenter 5 to find most significant digit(first digit) of a number\nenter -1 to exit the programor\n\n");
	scanf("%d", &x);
	for(;x!=-1;){
		if(x == 1){
			printf("enter the number =");
			scanf("%d", &n);
			is3den(n);
		}
		if(x == 2){
			printf("enter the number =");
			scanf("%d", &n);
			sumDigits(n);
		}
		if(x ==3 ){
		 	printf("enter the number =");
			scanf("%d", &n);
			printf("enter the digit = ");
			scanf("%d", &d);
	 		findDigitCount(n,d);
		}
		if(x == 4){
			printf("enter the number =");
			scanf("%d", &n);
			largestDigit(n);
		}
		if(x == 5){
			printf("enter the number =");
			scanf("%d", &n);
			firstDigit(n);
		}
		printf("enter 1 to know the number is divisible by 3 or have 3 as a digit\nenter 2 to get sum of digits of a number\nenter 3 to know how many times a digit comes in the number\nenter 4 to find largest digit in the number\nenter 5 to find most significant digit(first digit) of a number\nenter -1 to exit the programor\n\n");
		scanf("%d", &x);
	}
}