#include <stdio.h>
void roundOfInteger(int i, int j){
    int x = i%j;
    int y = j-x;
    printf("round of %d in multiple of %d = %d\n", i, j, i+y);
}

void roundOfIntegerInMultipleOfsecond(int i, int j){
    printf("round of %d in multiple of %d = %d\n", i, j, i+(j-i%j));
}

void convertFohrenheitToCalcium(int a){
    printf("%d fohrenheit to centigrade degree is = %dcentigrade degree", a, (a-32)*5/9);
}

void interChangeDigit(int a, int b){
    b = a+b;
    a = b-a;
    b = b-a;
    printf("%d %d", a, b);
}

void countWeeks(){
    int d1 = 01;
    int m1 = 01;
    int y1 = 1992;
    int d2 = 31;
    int m2 = 05;
    int y2 = 1992;
    int d = (y2-y1)*365+ (28+31+30+31) + (d2-d1);
    // printf("given two dates are = ");
    printf("%d\n", d/7);
    // scanf("%d/%d/%d %d/%d/%d", &d1, &m1, &y1, &d2, &m2, &y2);
    printf("between %d/%d/%d and %d/%d/%d, number of weeks = %d  and days = %d", d1, m1, y1, d2, m2, y2, d/7, d%7);
}

void main(){
    // int i;
    // int j;
    // printf("enter a number and another number to round of first number in multiple of second number = ");
    // printf("enter two numbers =");
    // scanf("%d%d", &i, &j);
    // roundOfInteger(i, j);
    // roundOfIntegerInMultipleOfsecond(i, j);
    // int a;
    // printf("enter temperature of city in fohrenheit = ");
    // scanf("%d", &a);
    // convertFohrenheitToCalcium(a);
    // interChangeDigit(i, j);
    countWeeks();
}