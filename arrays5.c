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
    int a[][3]= {{1,2,3}, {4,5,2}, {13,3,100}};
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
    printf("largest number in 2 dimensional array = %d", l);
}
void addTwoMatrix(){
    int a[][3] = {{0,0,0}, {0,0,0}};
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
    int k = 4;
    int l = 3;
    char p[k][l];
    int length_p = sizeof(p)/sizeof(p[0]);
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

void frequentDigit(){
    int b[5] = {11,333,5555,1,999999};
    int counter[10] = {0};	
    for(int j = 0; j < 5; j++){
        int k =  b[j];
        for(; k > 9; k = k/10){
            counter[k%10]++;
        }
        counter[k]++; 
    }
    
    int largest = counter[0];
    int index = 0;
    for (int i = 0; i < 10; i++)
    {
       if(largest<counter[i]) {
        largest =counter[i];
        index = i;
       }
    }
    printf("\n%d digit have the maximum frequency. \n", index);
}

void main(){
        
    // largest();
    // addTwoMatrix();
    // to2Chars();
    // frequent();
    frequentDigit();
}