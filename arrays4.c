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

void removeZero(int a[], int x){
	int k;
	int b[k];
	k = 0;
	for(int i = 0; i < x; i++){
		if(a[i] != 0){
			b[k] = a[i];
			//printf("%d, ", b[k]);
			k = k+1;
		}	
	}
	printIntArray(b, k);
}

void removeMultiple(int a[], int x){
	int k;
	int b[k];
	k = 0;
	for(int i = 0; i < x; i++){
		if(a[i] == 0){
			b[k] = a[i];
			printf("%d, ", b[k]);
			k = k+1;
		}
		if(a[i]%3 == 0){
		}
		else { 
			int j;
			for(int j = a[i]; j > 9 && j%10 != 3; j = j/10){
			}
			if(j%10 == 3){
			}
			else{
				b[k] = a[i];
				printf("%d, ", b[k]);
				k = k+1;
			}
		}
		//else{
		//	b[k] = a[i];
		//	printf("%d, ", b[k]);
		//	k = k+1;
		//}
	}
}

void secondLargest(int a[], int x){
	int l1 = a[0];
	int l2 = a[0];
	int counter = 0;
	for(int i = 1; i < x; i++){
		if(l1 <= a[i]){
			l2 = l1;
			l1 = a[i];
		}
	}
	for(int i = 0; i < x && counter < 2; i++){
		if(l1 == a[i]){
			counter++;
		}
	}
	if(counter == 2){
		l2 = l1;
	}
	else{
		for(int i = 0; i < x; i++){
			if((a[i] != l1) && (l2 == l1)){
				l2 = a[i];
			}
			if(l2 < a[i] && a[i] != l1){
				l2 = a[i];
			}
		}
	}
	printf("%d, %d", l1, l2);
}


void thirdLargest(int a[], int x){
	int l1 = a[0];
	int l2 = a[0];
	int l3 = a[0];
	int counter = 0;
	int repeat = 0;
	for(int i = 1; i < x; i++){
		if(l1 <= a[i]){
			l3 = l2;
			l2 = l1;
			l1 = a[i];
		}
	}
	for(int i = 0; i < x && counter < 3; i++){
		if(l1 == a[i]){
			counter++;
		}
	}
	if(counter >= 2){
		l2 = l1;
	}
	if(counter == 3){
		l3 = l1;
	}
	else{
		for(int i = 0; i < x; i++){
			if((a[i] != l1) && (l2 == l1)){
				l3 = l2;
				l2 = a[i];
			}
			if(l2 <= a[i] && a[i] != l1){
				l3 = l2;
				l2 = a[i];
			}
		}
		for(int i = 0; i < x && repeat < 2; i++){
			if(l2 == a[i]){
				repeat++;
			}
		}
		if(repeat == 2){
			l3 == l2;
		}
		else{
			for(int i = 0; i < x; i++){
				if(a[i] != l1 && a[i] != l2 && l2 == l3){
					l3 = a[i];
				}
				if(l3 < a[i] && a[i] != l1 && a[i]  != l2){
					l3 = a[i];
				}
			}
		}
	}
	printf("%d, %d, %d", l1, l2, l3);
}	
void main(){
	int a[4] = {4, 3, 130, 1};
	//thirdLargest(a,4);
	//secondLargest(a, 4);
	//removeZero(a, 4);
	removeMultiple(a, 4);
} 