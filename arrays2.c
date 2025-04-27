#include <stdio.h>


void mergerOfTwoArrays(int a[], int b[], int x, int y){
	int c[x+y];
	for(int i = 0; i < x; i++){
		c[i] = a[i];
		printf("%d ", c[i]);
	}
	for(int i = 0; i < y; i++){
		c[x+i] = b[i];
		printf("%d ", c[x+i]);
	}
}

void create(int n){
	int a[n*(n+1)/2];
	int k = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			a[k] = j+1;
			printf("%d ",a[k]);
			k = k+1;
		}
	}
}

int sumOfElements(int a[], int l){
	int sum = 0;
	for(int i = 0;	i < l; i++){
		sum = sum + a[i];
	}
	return sum;
}

void canSplit(int a[], int l){
	int x = 0;
	int y = sumOfElements(a, l);
	for(int i = 0; (i < l) && (x != y); i++){
		x = x + a[i];
		y = y - a[i];
	}
	if(x == y){
		printf("array can be split = true");
	}
	else{
		printf("array can be split = false");
	}
}

void isSorted(int a[], int l){
	int i;
	if(l <= 2){
		printf("array is sorted = true");
	}
	else if(a[0] <= a[1]){
		for( i = 0; (i <( l-1) && (a[i] <= a[i+1])); i++){
		}
		if((i < l-1) && (a[i] > a[i+1])){
			printf("array is sorted = false");
		}
		else if(a[i-1] <= a[i]){
		 	printf("array is sorted = true");
		}
		else{
			printf("array is sorted = false");
	 	}
 	}
	 else{
		for(i = 0; (i < (l-1) && (a[i] >= a[i+1])); i++){
		}
		if((i < l-1) && (a[i] < a[i+1])){
			printf("array is sorted = false");
		}
 		else if(a[i-1] >= a[i]){
			printf("array is sorted = true");
		}
		else{
			printf("array is sorted = false");
	 	}
	}
}


void mergeAndSortInDescendingOrder(int arr1[], int arr2[], int x, int y){
	int arr3[x+y];
	int k=0;
	int j;
	for(int i = 0; i < x; i++){
		for(j = 0; (j < y) && (arr2[j] > arr1[i]); j++){
			arr3[k] = arr2[j];
			if(k == 0){
				printf("%d , ", arr3[k]);
				k = k+1;
			}
			if((k>0) && (arr3[k] <= arr3[k-1])){
				printf("%d , ", arr3[k]);
				k = k+1;
			}
		}
		if(arr1[i]>= arr2[j]){
			arr3[k] = arr1[i];
			printf("%d , ", arr3[k]);
			k = k+1;
		}
		if((i+1) == x){
			for( ; j < y-1; j++){
			arr3[k] = arr2[j];
			printf("%d , ", arr3[k]);
			k = k+1;
			}
		}
	}
	if(arr1[x-1] >= arr2[y-1]){
		arr3[k] = arr2[y-1];
		printf("%d ", arr3[k]);
	}
	else{
		arr3[k] = arr1[x-1];
		printf("%d ", arr3[k]);
	}
}

void main(){
	int arr1[5] = {-5, 0, 18, 13, 14};
	int arr2[3] = {0, -1, -2};
	int arr3[1] = {0};
	int n;
	//printf("enter the number = ");
	//scanf("%d", &n);
	//mergerOfTwoArrays(arr1, arr2, 5, 3);
	//create(n);
	//canSplit(arr1, 5); 
	isSorted(arr1, 5);
	//mergeAndSortInDescendingOrder(arr1, arr2, 1, 3);
}
			
		