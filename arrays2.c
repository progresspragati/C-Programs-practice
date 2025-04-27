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
	int arr1[5] = {10, 11, 12, 5, 4};
	//int arr2[3] = {0, -1, -2};
	//int n;
	//printf("enter the number = ");
	//scanf("%d", &n);
	//mergeAndSortInDescendingOrder(arr1, arr2, 1, 3);
	//mergerOfTwoArrays(arr1, arr2, 1, 3);
	//create(n);
	canSplit(arr1, 5); 
	//printf("%d",sumOfElements(arr1, 5)); 
}
			
		