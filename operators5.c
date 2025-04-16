#include <stdio.h>

void computePrime(int n){
	int prime = 0;
	int i = 2;
	for( ; prime < n; i++){
		int counter = 0;
		for(int j = 2; j <= i/2 && counter == 0; j++){
			if(i%j == 0){
				counter++;
			}
		}
		if(counter == 0){
			prime = prime + 1;
		}
	}
	printf("%dth prime = %d\n\n", n, i-1);
}
void superDivide(int n){
	int x = n;
	int y = x%10;
	for( ;x>9 && y != 0 && n%y == 0; ){
		x = x/10;
		y = x%10;
	}
	if(y != 0 && n%y == 0){
		printf("%d is super divide = true\n\n", n);
	}
	else{
		printf("%d is super divide = false\n\n", n);
 	}
}

int prime(int n){
	int counter = 0;
	if(n<2){
		return 0;
	}
	else{
		for(int i =2; i<=n/2 && counter == 0; i++){
			if(n%i == 0){
				counter++;
			}
		}
		if(counter == 0){
			return 1;
		}
		else{
			return 0;
		}
	}
}

void allFactorsPrime(int n){
	int x =1;
	for(int i =2; i<=n/2 && x == 1; i++){
		if(n%i == 0){
			x = x * prime(i);
		}
	}
	if(x == 1){
		printf("all factors of %d is prime = true\n\n", n);
	}
	else{
		printf("all factors of %d is prime = false\n\n", n);
	}
}

void count(int n){
	int x = 0;
	for(int i = 1; i <= n; i++){
		if(i%3 == 0){
		x++;
		}
		else{
			int j = i;
			for( ; j > 9 && j%10 != 3; j = j/10 ){
			}
			if(i%10 == 3 || j%10 == 3){
				x++;
			}
		}
	}
	printf("%d", x);
}

void reverse(int n){
	int m = n;
	int reverse = 0;
	int y;
	for(  ; n > 0; ){
		y = n%10;
		reverse = reverse * 10 + y;
		n = n/10;
	}
 	printf("reverse the %d = %d\n\n", m, reverse+n);
}
	
void main(){
	int n;
	int x;
	printf("enter 1 to compute prime\nenter 2 to know whether the number is superdivide\nenter 3 to know all factors of the number is prime\nenter 4 to know how many numbers are divided and contain 3 as a digit between 1 and number\nenter 5 to get reverse of the number\nenter -1 to exit\n");
	printf("enter the option = ");
	scanf("%d", &x);
	for( ; x != -1; ){
		if(x == 1){
		  	printf("enter the number = ");
			scanf("%d", &n);
			computePrime(n);
		}
		if(x == 2){
		  	printf("enter the number = ");
			scanf("%d", &n);
			superDivide(n);
		}
		if(x == 3){
		  	printf("enter the number = ");
			scanf("%d", &n);
			allFactorsPrime(n);
		}
		if(x == 4){
		  	printf("enter the number = ");
			scanf("%d", &n);
			count(n);
		}
		if(x == 5){
		  	printf("enter the number = ");
			scanf("%d", &n);
			reverse(n);
		}
		printf("enter 1 to compute prime\nenter 2 to know whether the number is superdivide\nenter 3 to know all factors of the number is prime\nenter 4 to know how many numbers are divided and contain 3 as a digit between 1 and number\nenter 5 to get reverse of the number\nenter -1 to exit\n");
	}
}