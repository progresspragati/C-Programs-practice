#include <stdio.h>

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
	int a[11]= {1,2,3,3,5,3,7, 8, 8, 8, 8};
	//printf("%d", countEvens(11, a));
	//count6and4(a, 11);
	printf("%d", compute(a, 11));
}