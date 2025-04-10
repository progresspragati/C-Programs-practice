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
	printf("enter the number =");
	scanf("%d", &n);
	sumOfNumbers(n);
	printf("enter the value of n1 and n2 = ");
	scanf("%d %d", &n1, &n2);
	sumOfSquare(n1, n2);
	sum(n);
	findNextMultiple(n);
}