#include <stdio.h>

void chapter3_2(){
    int j = 1;
    while(j <= 255){
        printf("%c %d\n", j, j);
        j++;
    }
}

void checkWhile(){
    int i = 0;
    int j = 0;
    while(++i < 10){
        printf("%d\n", i);
    }
    while(j < 10){
        printf("\n%d", j++);
    }
}

void printChar(){
    char j = 1;
    while(j <= 255){
        printf("%d ", j);
        j = j + 1;
    }
}
void printCharAndInt(){
    int i = 1;
    while(i <= 255);// it means null statement. so no output with infinite loop
    {
        printf("%c %d  ", i, i);
        i++;
    }
}

void printInFor(){
    int i;
    for(i = 1; i++ <= 5; printf("%d", i));
}

void printTwoInt(){
    int i = 1, j = 1;
    for(; j; printf("%d %d\n", i, j))
        j = i++ <= 5; //first compare i then increment
}

void printInt(){
    int i = 0;
    for(; i++; )
        printf("%d ",i);// //first compare i then increment
}

void print3Int(){
    int x = 3, y, z;
    z = y = x;
    z *= y = x*x;
    printf("x = %d y = %d z = %d", x, y, z);

}

void urinary(){
    // int i = 3, j;
    // j = ++i*++i*++i;
    // printf("%d %d", j, i);
    int x = 10, y, z;
    z = y = x;
    y-= x--;
    z-= --x;
    x = --x - x--;
    printf("%d %d %d",  y, z, x);
    // int k, l, m;
    // k = l = m = 1;
    // m = ++k || ++l && ++m;
    // printf("k = %d l = %d m = %d", k, l, m);//result k = 2 l = 1 m = 1 because in case of OR operator if first condition is true it will not read 2nd condition , so the value of l,m will not be changed
    // int p = 10, q;
    // q = p--;
    // printf("p = %d q = %d", p, q);
}

void main(){
    // checkWhile();
    // printChar(); //infinite loop because char can take value -128 to +127.
    // printCharAndInt();
    // printInFor();
    // printTwoInt();
    // printInt();
    // print3Int();//if space between * =  then it gives error. so, don't use space between * and =.
    urinary();//doubt
    // chapter3_2();
}