#include <stdio.h>

void countOfFactors(int n){
     int counter = 0;
     for(int i = 2; i<=n/2;i++){
        if(n%i == 0){
          counter++;
        }
      }
     printf("count of factors of %d = %d\n\n",n, counter);
  }
void isPrime(int m){
	int counter = 0;
	for(int i = 2; i<=m/2 && counter == 0;i++){
		if(m%i == 0){
			counter++;
		}
	}
	if(counter == 0 && m>1){
		printf("%d is a prime number = true\n\n",m);
	}
	else{
		printf("%d is a prime number = false\n\n",m);
	}
}
void power(int a, int n){
	int x = 1;
	for( int i = 0; i < n && n != 0;i++){	
		x = x*a;
	}
	printf("power %d of %d = %d\n\n",n, a, x);
}
void sumOfDigits(int n, int d){
	int x = 0;
	for(int i = 1; i <= d; i++){
		x = x + n%10;
		n = n/10;
	}	
	printf("sum of %d digits of number = %d\n\n",d,x);
}		
void isPerfect(int n){
	int x = 0;
	for(int i = 1; i <= n/2;i++){
		if(n%i == 0){
			x = x+i;
		}
	}
	if(x==n){
		printf("%d is a perfect number = true\n\n",n);
	}
	else{
		printf("%d is a perfect number = false\n\n",n);
	}
}	
void value(int n1, int n2){
	int f=0;
	int b=0;
	int fb=0;
	for(int i=0; i <= n2-n1; i++){
		if((n1+i)%15==0){
			fb++;
		}
		else if((n1+i)%3==0){
			f++;
		}
		else if((n1+i)%5==0){
			b++;
		}
	}
	printf("value of 3*f+5*b-15*fb =%d\n\n",3*f+5*b-15*fb);
}




void main(){
	int n = 0;
	int d;
	int x;
	printf("enter 1 to count factors of a number\nenter 2 to check the number it is prime or not\nenter 3 to compute power of a number\nenter 4 to get sum of number's digits\nenter 5 to know a number is a perfect number or not\nenter 6 to get value of 3*f+5*b-15*fb\nenter -1 to exit the program\n\n ");
	scanf("%d",&x);
	for(;x!=-1;){
		if(x==1){
			printf("enter the number = ");
			scanf(" %d", &n);
			countOfFactors(n);
		}
		else if(x == 2){
			printf("enter the  number = ");
			scanf(" %d", &n);
			isPrime(n);
		}
		else if(x == 3){
			printf("enter the number = ");
			scanf(" %d", &n);
			printf("enter the power of = ");
			scanf(" %d", &d);
			power(n,d);
		}
		else if(x == 4){
			printf("enter the number = ");
			scanf(" %d", &n);				
			printf("enter number of digit of the number = ");
			scanf(" %d", &d);
			sumOfDigits(n,d);
		}
		else if(x == 5){
			printf("enter the number = ");
			scanf(" %d", &n);
			isPerfect(n);
		}
		else if(x == 6){
			printf("enter the first number = ");
			scanf(" %d", &n);
			printf("enter the second number = ");
			scanf(" %d", &d);
			value(n,d);
		}
                printf("enter 1 to count factors of a number\nenter 2 to check the number it is prime or not\nenter 3 to compute power of a number\nenter 4 to get sum of number's digits\nenter 5 to know a number is a perfect number or not\nenter 6 to get value of 3*f+5*b-15*fb\nenter -1 to exit the program\n\n ");
		scanf(" %d", &x);
	}
}