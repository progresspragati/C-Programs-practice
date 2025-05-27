#include <stdio.h>

void Q7(){
    int i;
    float f;
    double d;
    long l;
    i = l = f = d = 100/3;
    printf("%d %ld %f %lf\n", i, l, f, d);
    f = i = d = l = 100/3;
    printf("%f %d %lf %ld\n", f, i, d, l);
    l= i = d = f = 100/3;
    printf("%ld %d %lf %f\n", l, i, d, f);
    d = l = f = i = 100/3;
    printf("%lf %ld %f %d\n", d, l, f, i);
}

change(){
    auto int i = 100;
    register int j = 200;
    printf("change's i and j are %d %d \n", i , j);
}

void Q8(){
    auto int i = 10;
    register int j = 20;
    printf("main's i and j are %d %d\n", i, j);
    change();
    printf("main's i and j are %d %d\n", i, j);
}

// int i = 10, j = 20, k = 30;
// val(){
//     printf("i = %d j = %d k = %d", i, j, k);
// }

void Q9(){
    int i = 1, j = 2, k = 3;
    printf("i = %d j = %d k = %d\n", i, j, k);
    // val();
}

int num;
increment(){
    num++;
    return(num);
}

void Q10(){
    int i, j;
    for(i = 1; i <= 3; i++){
        j = increment(); // num was declared outside of function so it will be a external storage class of variable. so, initially value of num = 0
        printf("j = %d\n", j);
    }
    printf("num = %d", num);
}

recsum(i)
int i;
{
    static int sum = 0;// initial value of sum will be 0 
    if(i == 3)
        return (sum);
    else{
        sum = sum + 10;
        i++;
        recsum(i);
    }
}

void Q11(){
    int z, y;
    z = recsum(1);
    y = recsum(1);
    printf("z = %d\ny = %d", z, y);
}

int i = 0;
val(){
    i = 100;
    printf("val's i = %d\n", i);
    i++;
}

void Q12(){
    printf("main's i = %d\n", i);
    i++;
    val();
    printf("main's i = %d\n", i);
    val();
}


void main(){
    // Q7();
    // Q8();
    // Q9();
    // Q10();
    // Q11();
    Q12();
}