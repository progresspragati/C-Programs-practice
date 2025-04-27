#include <stdio.h>

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
	int arr1[1] = {1};
	int arr2[3] = {0, -1, -2};
	mergeAndSortInDescendingOrder(arr1, arr2, 1, 3);
}
			
		