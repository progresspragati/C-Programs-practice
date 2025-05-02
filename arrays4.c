#include <stdio.h>
void thirdLargest(int a[], int x){
	int l1 = a[0];
	int l2 = a[0];
	int l3 = a[0];
	int counter = 0;
	for(int i = 1; i < x; i++){
		if(l1 < a[i]){
			l3 =l2;
			l2 = l1;
			l1 = a[i];
		}
		if(l1 == l2){
			if(l1 == a[i] && counter < 3){
				counter++;
			}
			if(counter >= 2){
				l2 = l1;
			}
			if(counter == 3){
				l3 = l1;
			}
			else{
				if(l2 < a[i] && a[i] != l1){
					l3 = l2;
					l2 = a[i];
				}
				if((l3 < a[i]) && (a[i] != l1) && (a[i] != l2)){
					l3 = a[i];
				}
			}
		}
	}
	printf("%d, %d, %d", l1, l2, l3);
}

void secondLargest(int a[], int x){
	int l1 = a[0];
	int l2 = a[0];
	int counter = 0;
	for(int i = 1; i < x; i++){
		if(l1 < a[i]){
			l2 = l1;
			l1 = a[i];
		}
	}
	if(l1 == l2){
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
	}
	printf("%d, %d", l1, l2);
}

void main(){
	int a[4] = {1, 2, 4, 4};
	thirdLargest(a,4);
	// secondLargest(a, 4);
} 