#include <stdio.h>

int prime(int n){
	int counter = 0;
	if(n<2){
		return 1;
	}
	else{
		for(int i=2;i<=n/2 && counter == 0;i++){
			if(n%i == 0){
				counter++;
			}
		}
		if(counter == 0){
			return 0;
		}
		else{
		return 1;
 		}
	}
	
}

void anyonePrime(int a, int b, int c){
	int x = a;
	int y = b;
	int z = c;
	a = prime(a);
	b = prime(b);
	c = prime(c);
	if(a == 0 || b == 0 || c == 0){
		printf("any number of %d %d %d is prime = true\n\n",x,y,z);
	}
	else{
		printf("any number of %d %d %d is prime = false\n\n",x,y,z);
	}
}
int firstDigit(int n){
	for( ;n>9; ){
		n=n/10;
	}
	return n;
}
void sameFirstDigit(int a, int b, int c){
	int x = a;
	int y = b;
	int z = c;
	a = firstDigit(a); printf("a = %d\n",a);	
	b = firstDigit(b); printf("b = %d\n",b);
	c = firstDigit(c); printf("c = %d\n",c);
	if((a == b) || (b == c) || (c == a)){
		printf("%d %d %d have same first digit = true\n\n",x,y,z);
	}
	else{
		printf("%d %d %d have same first digit = false\n\n",x,y,z);
	}
}


int roundTheValue(int n){
	int x;
	if(n%10<5){
		x = (n-n%10);
		return (x);
	}
	else{
		x = n+(10-n%10);
		return (x);
	}
}
void sumRounded(int a, int b, int c, int d){
	int x = a;
	int y = b;
	int z = c;
	int t = d;
	int sum;
	a = roundTheValue(a);
	b = roundTheValue(b);
	c = roundTheValue(c);
	d = roundTheValue(d);
	sum = a+b+c+d;
	printf("sum of rounded value of %d %d %d %d = %d\n\n",x,y,z,t,sum);
}






void main(){
	int a, b, c, d;
	int x;
	printf("enter 1 to know the number is divisible by 3 or have 3 as a digit\nenter 2 to get sum of digits of a number\nenter 3 to know how many times a digit comes in the number\nenter -1 to exit the programor\n\n");
	scanf("%d", &x);
	for(;x!=-1;){
		if(x == 1){
			printf("enter given three numbers =");
			scanf("%d %d %d", &a, &b, &c);
			anyonePrime(a, b, c);
		}
		if(x == 2){
			printf("enter given three numbers =");
			scanf("%d %d %d", &a, &b, &c);
			sameFirstDigit(a, b, c);
		}
		if(x ==3 ){
		 	printf("enter given four numbers =");
	                scanf("%d %d %d %d", &a, &b, &c, &d);
	 		sumRounded(a, b, c, d);
  		}
		printf("enter 1 to know the number is divisible by 3 or have 3 as a digit\nenter 2 to get sum of digits of a number\nenter 3 to know how many times a digit comes in the number\nenter -1 to exit the programor\n\n");
		scanf("%d", &x);
	}
}
