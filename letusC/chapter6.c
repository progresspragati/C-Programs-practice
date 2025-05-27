#include <stdio.h>

void pythagoriamTriplets(){
    for(int i = 1; i <= 10; i += 2){
        printf("odd number is = %d\n consecutive numbers are = %d %d\n\n", i, i*i/2, i*i/2 + 1);
    }
}

int reverse(int i){
    int reverse = 0;
    for(; i > 9; ){
        reverse = reverse*10 + i%10;
        i = i/10;
    }
    return (reverse*10 + i);
}

void reverseSquares(){
    for(int i = 10; i <= 100; i++){
        if(i*i == reverse(reverse(i)*reverse(i))){
            printf("%d - is a number whose reverse of reverse's square is same of number's square.\n", i);
        }
    }
}

void main(){
    // pythagoriamTriplets(); 
    reverseSquares(); 
}