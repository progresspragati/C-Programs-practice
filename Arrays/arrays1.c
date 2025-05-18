#include <stdio.h>

int sizeOfString(char str[]){
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++){
        counter++;
    }
    return counter;
}

int countEvens(int l, int a[l]){
	int counter = 0;
	for(int i = 0; i < l; i++){
		if(a[i]%2 == 0){
			counter++;
		}
	}
	return counter;
}

void count6and4(int a[], int l){
	int counter = 0;
	for(int i = 0; i < l; i++){
		if(a[i] == 6){
		counter++;
		}
		if(a[i] == 4){
		counter--;
		}
	}
	if(counter > 0){
		printf("true");
	}
	else{
		printf("false");
	}
}

void stringOfSize(char a[], char b[], char c[], char d[], int n){
	int x[] = {sizeOfString(a), sizeOfString(b), sizeOfString(c), sizeOfString(d)};
	int counter = 0;
	for(int i = 0; i < 4; i++){
		if(x[i] == n){
			counter++;
		}
	}
	printf("%d size of string in string array is = %d", n, counter);
}

void make(int n){
	printf("{");
	for(int i = 0; i < n; i++){
		if(i == n-1){
			printf("%c%d%c", '"', i, '"');
		}
		else{
			printf("%c%d%c,", '"', i, '"');
		}
	}
	printf("}");
}

int compute(int a[], int x){
	int l = a[0];
	for( int i = 1; i < x; i++){
		if(a[i] >= l){
			l = a[i];
		}
	} 
	int s = l;
	for(int i = 0; i < x; i++){
		if(s >= a[i]){
			s = a[i];
		}
	}
	return l-s;
}

void main(){
	// int a[11]= {1,2,3,3,5,3,7, 8, 8, 8, 8};
	int n;
	// printf("%d", countEvens(11, a));
	// count6and4(a, 11);
	// printf("%d", compute(a, 11));
	stringOfSize("A","DEF","BC","GHI",3);
	// scanf("%d", &n);
	// make(n);
}