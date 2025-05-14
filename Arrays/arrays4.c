#include <stdio.h>

void printIntArray(int a[], int l){
	printf("{ ");
	for(int i = 0; i < l; i++){
		printf("%d ", a[i]);
		if(i < l-1)
			printf(", ");
	}
	printf("}");
}

void removeZero(int a[], int x){
	int k;
	printf(" length of two dimentional array = %d ",k);
	int b[k];
	k = 0;
	for(int i = 0; i < x; i++){
		if(a[i] != 0){
			b[k] = a[i];
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
			k = k+1;
		}
		else if(a[i]%3 == 0){
		}
		else { 
			int j;
			for(j = a[i]; j > 9 && j%10 != 3; j = j/10){
			}
			if(j%10 == 3){
			}
			else{
				b[k] = a[i];
				k = k+1;
			}
		}
	}
	printIntArray(b, k);
}

void arrayOfPrime(){
	int n1;
	int n2;
	printf("enter n1 and n2 = ");
	scanf("%d %d", &n1, &n2);

	int k;
	int b[k];
	k = 0;
 	for(int i = n1; i <= n2; i++){
		int counter = 0;
		for(int j = 2; j <= i/2 && counter == 0; j++){
			if(i%j == 0){
				counter++;
			}
		}
		if(counter == 0 && i != 1 ){
			b[k] = i;
			//printf("%d, ", b[k]);
			k = k+1;
		}
	}
	printIntArray(b, k);
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

void anyDuplicate(int a[], int x){
	int counter = 0;
	int j;
	for(int  i = 0; i < x; i++){
		for(j = i+1; j < x  && a[i] != a[j]; j++){
		}
		if(a[i] == a[j] && j < x){
			counter++;
		}
	}
	if(counter >= 1){
		printf("true");
	}
	else{
		printf("false");
	}
}

void thirdLargestNumberUnique(int a[], int x){
	int l1 = a[0];
	int l2 = a[1];
	int l3 = a[2];
	for(int i =1; i < x; i++){
		if(l1 < a[i]){
			l3 = l2;
			l2 = l1;
 			l1 = a[i];
		}
		else if(l1 !=a[i] && l2 < a[i]){
			l3 = l2;
			l2 = a[i];
		}
		else if(l1 != a[i]  && l2 != a[i] && l3 < a[i]){
			l3 = a[i];
		}
	}
	printf("%d, %d, %d", l1, l2, l3);
}

void removeDuplicates(int a[], int x){
	int k;
	int b[k];
	k = 0;
	int j;
	for(int i = 0; i < x; i++){
		for(j = i+1; j < x && a[i] != a[j]; j++){
		}
		if(a[i] ==  a[j] ){
		}
		else{
		b[k] = a[i];
		k = k+1;
		}
	}
	printIntArray(b, k);
}	

void main(){
	
	int a[7] = {60,33,3,33,4,60,-5};
	int length_a = sizeof(a)/sizeof(a[0]);
	//thirdLargest(a, length_a);
	//secondLargest(a, length_a);
	removeZero(a, length_a);
	//removeMultiple(a, length_a);
	//arrayOfPrime();
	//anyDuplicate(a, length_a);
	//thirdLargestNumberUnique(a, length_a);
	// removeDuplicates(a, length_a);
} 

