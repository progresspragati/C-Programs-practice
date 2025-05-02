#include <stdio.h>

void printIntArray(int a[], int l){
	printf("{ ");
	for(int i = 0; i < l; i++){
		printf("%d ", a[i]);
		if(i < l-1)
			printf(", ");
	}
	printf(" }");
}

void printCharArray(char a[], int l){
	printf("{ ");
	for(int i = 0; i < l; i++){
		printf("%c ", a[i]);
		if(i < l-1)
			printf(", ");
	}
	printf("}");
}

void countMatching(int a[], int b[], int x){
	int counter = 0;
	for(int i =0; i < x; i++){
		if((a[i]-b[i] >= 0) && (a[i]-b[i] < 10)){
			counter++;
		}
		if((b[i]-a[i] > 0) && (b[i] - a[i] <10)){
			counter++;
		}
	}
	printf("%d, ", counter);
}


void calcScore(char a[], char b[], int x){
	int score = 0;
	for(int i= 0; i < x; i++){
		if(a[i] == b[i]){
			score = score + 3;
		}
		else{
			score = score - 1;
		}
	}
	printf("%d", score);
}


void reverse(int a[], int l){
	int b[l];
	int j = 0;
	for(int i =l-1; i >= 0; i--){
		b[j] = a[i];
		printf("%d, ",b[j]);
		j++;
	}
}


void shift(char x[], int l){
	int p= x[0];
	for(int i = 0; i < l-1; i++){
		x[i] = x[i+1];
	}
	x[l-1] = p;
	printCharArray(x, l);
}

void rightShift(char x[], int l){
	char y= x[0];
	x[0] = x[4];
	for(int i = 1; i < l; i++){
		char z = x[i];
		x[i] = y;
		y = z;
	}
	printCharArray(x, l);
}



void main(){
	//int a[5] = {56, 67, 88, 90, 99};
	//int b[5] = {53, 60, 91, 40, 23};
	char a[5] = {'e', 'd', 'c', 'b', 'a'};
	//char b[5] = {'b', 'a', 'c', 'a', 'a'};
	//countMatching(a, b, 5);
	//calcScore(a, b, 5);
	//reverse(a, 5);
	rightShift(a, 5);
	//printIntArray(a, 5);
}