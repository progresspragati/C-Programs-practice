#include <stdio.h>

void changeCase(char ch){
	char x = ch;
	if(ch >= 'A' && ch <= 'Z'){
		ch = ch + 32;
	}
	else if(ch >=  'a' && ch <= 'z'){
		ch = ch - 32;
	}
	else{
		ch = ch + 0;
	}
	printf("change case of %c = %c\n\n", x, ch);
}


void isDigit(char ch){
	if(ch >= '0' && ch <= '9'){
		printf("given charactor is a digit = true\n\n");
	}
	else{
		printf("given charactor is a digit = false\n\n");
	}
}

void middle(char x, char y, char z){
	if((x > y && x < z) || (x > z && x < y)){
		printf("middle char among %c, %c, %c = %c\n\n", x, y, z, x);
	}
	else if((y > x && y < z) || (y > z && y < x)){
		printf("middle char among %c, %c, %c = %c\n ", x, y, z, y);
	}
	else{
		printf("middle char among %c, %c, %c = %c\n\n", x, y, z, z);
	}
}

void compute(int a, int b, char c){
	int x = 0;
	if( c == '+' ){
		x = a + b;
	}
	else if( c == '-' ){
		x = a - b;
	}
	else if( c == '*' ){
		x = a * b;
	}
	else if( c == '/' ){
		x = a / b;
	}
	else if( c == '%' ){
		x = a % b;
	}
	else{
		printf("given invalid operator");
	}
	printf("compute %d and %d with operator %c = %d", a, b, c, x);
}


void main(){
	char ch, x, y, z, c;
	int a, b;
	//printf("give a charactor = ");
	//scanf("%c", &ch);
	//changeCase(ch);
	//isDigit(ch);
	printf("give 3 charactors = ");
	scanf("%c %c %c", &x, &y, &z);
	middle(x, y, z);
	//printf("given two numbers and a operator =");
	//scanf("%d %d %c", &a, &b, &c);
	//compute(a, b, 'c');
}