#include <stdio.h>

void printTheNumber(){
    int n;
    int j = 1;
    printf("enter a number = ");
    scanf("%d", &n);
    for(int i = n; i > 9; i /= 10){
        j = j*10;
    }
    printf("%c", '"');
    for( ; j != 0; j /= 10){
        switch(n/j%10){
            case 0:
                printf("zero");
                break;
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
        }
        if(j >= 10){
            printf("%c", ' ');
        }
    }
    printf("%c", '"');
}

void convertTheNumber(){
    int n, b, j = 0;
    printf("enter a number = ");
    scanf("%d", &n);
    printf("enter the base in which we want to convert the number = ");
    scanf("%d", &b);
    int l = n;
   
    switch(b){
        default:
            printf("invalid conversion");
            break;
        case 2:
            for(int k = 1; n > 0; k *= 10){
                j = j + n%b*k;
                n = n/b;
            }
            printf("conversion of %d into binary = %d ", l, j);
            break;
        case 8:
            printf("conversion of %d into octal = %o", l, l);
            break;
        case 16:
            printf("conversion of %d into hexadecimal = %X", l, l);
            break;
    }
}

void main(){
    // printTheNumber();
    convertTheNumber();
}