#include <stdio.h>

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
	int p = x[0];
	for(int i = 0; i < l-1; i++){
		x[i] = x[i+1];
		printf("%c,", x[i+1]);
	}
	x[l-1] = p;
	printf("%c", x[l-1]);
}

void main(){
	//int a[5] = {56, 67, 88, 90, 99};
	//int b[5] = {53, 60, 91, 40, 23};
	char a[5] = {'a', 'b', 'c', 'd', 'a'};
	//char b[5] = {'b', 'a', 'c', 'a', 'a'};
	//countMatching(a, b, 5);
	//calcScore(a, b, 5);
	//reverse(a, 5);
	shift(a, 5);
}