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
void largest(){
    int a[][3]= {{1,2,3}, {4,5,2}, {13,3,0}};
    int x = sizeof(a)/sizeof(a[0]);
    int y = sizeof(a[0])/(sizeof(a[0][0]));
    int l = a[0][0];
    for(int i = 0; i < x; i++){
        for(int j =0; j < y; j++){
            if(l < a[i][j]){
                l = a[i][j];
            }
        }
    }
    printf("%d", l);
}
void addTwoMatrix(){
    int a[][3] = {{6,6,2}, {5,2,4}};
    int b[][3] = {{0,2,3}, {-1,-3,0}};
    int x = sizeof(a)/sizeof(a[0]);
    int y = sizeof(a[0])/(sizeof(a[0][0]));
    int c[x][y];
    for(int i = 0; i < x; i++){
        int j;
        for(j = 0; j < y; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d, ", c[i][j]);
        }
        // printIntArray(c, j-1);
        printf("\n");
    }
}
void to2Chars(){
    char a[15] = {"bat sat put mat"};
    // int x = sizeof(a)/sizeof(a[0]);
    //printf("%d", x);
    int k;
    int l;
    char p[k][l];
    k = 0;
    l = 0;
    for(int i = 0; i < 15; i++){
        if(a[i] == ' '){
            printf("\n");
            k = k+1;
            l = 0;
        }
        else{
            p[k][l] = a[i];
            printf("%c, ", p[k][l]);
            l = l+1;
         }
    }
}

void frequent(){
    int a[] = {24,37,30,30,31,33,37,30,24,10,0};
    int x = sizeof(a)/sizeof(a[0]);
    int counter[x];
    for(int i = 0; i < x; i++){
        counter[i] = 1;
        for(int j = i+1; j < x; j++){
            if(a[i] == a[j]){
                counter[i]++;
            }
        }
    }
    int f = a[0];
    for(int i = 1; i < x; i++){
        if(counter[0] < counter[i]){
            f = a[i];
        }
    }
    printf("%d", f);
}
void main(){
        
    // largest();
    // addTwoMatrix();
    // to2Chars();
    frequent();
}