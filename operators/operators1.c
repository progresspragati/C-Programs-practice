#include <stdio.h>


void sumOfNumbers(int n){
	int x = 0;
	for(int i = 1; i <=n ; i++){
		x = x + i;
	}
	printf("sum of numbers from 1 to %d = %d\n\n", n, x);
}
void sumOfSquare(int n1, int n2){
	int sum = 0;
	for(int i = n1; i <= n2; i++){
		sum = sum + i*i;
	}
	printf("sum of squares from %d to %d = %d\n\n", n1, n2, sum);
}

void sum(int n){
	int sum = 0;
	for(int i =1; i <= n; i++){
		if(i%2 == 0 || i%3 == 0){
			sum = sum;
		}
		else{
			sum = sum + i;
		}
	}
	printf("sum of 1 to %d, which is not divisible by 2 or 3 =%d\n\n", n, sum);
}

void findNextMultiple(int n){
	int i ;
	for(i = 0; n >= i; i = i+21){
	}
	printf("smallest next multiple of %d which is divisible by both 3 and 7 = %d", n, i);
}


void main(){
	int x;
	int n;
	int n1;
	int n2;
	printf("enter 1 to get sum of numbers\nenter 2 to evaluate sum  of square between 2 numbers\nenter 3 to get sum of numbers, which is not divisible by 2 or 3\nenter 4 to get next smallest multiple of a number, which divided by both 3 and 7\nenter -1 to exit\n\n");
	scanf("%d", &x);
	for(;x!=-1){
		if(x == 1){
			printf("enter the number =");
			scanf("%d", &n);
			sumOfNumbers(n);
		}
		else if(x == 2){
			printf("enter the value of n1 and n2 = ");
			scanf("%d %d", &n1, &n2);
			sumOfSquare(n1, n2);
		}
		else if(x == 3){
			printf("enter the number =");
			scanf("%d", &n);
			sum(n);
		}
		else if(x == 4){
			printf("enter the number =");
			scanf("%d", &n);
			findNextMultiple(n);
		}
		printf("enter 1 to get sum of numbers\nenter 2 to evaluate sum  of square between 2 numbers\nenter 3 to get sum of numbers, which is not divisible by 2 or 3\nenter 4 to get next smallest multiple of a number, which divided by both 3 and 7\nenter -1 to exit\n\n");
		scanf("%d", &x);
	}
}