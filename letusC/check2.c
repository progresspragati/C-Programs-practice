#include <stdio.h>

void checkRangeOfInteger(){
    int x = 400000*400000/400000;
    if(x == 400000)
        printf("bingo");
    else
        printf("dingo");
    printf("\n%d", x);
}

void main(){
//     int a = 500, b= 100, c;
//     if(!(a>=400))
//         b = 300;
//     c = 200;
// printf("b = %d c = %d", b, c);
    int x = 10, y = 100%90;
    if(x != y);
    // printf("x = %d y = %d", x, y);
    if(!3.14)
            printf("I have robbed and killed...");
        // else
            // printf("Until my evil purse was filled"); //this will be output because 3.14 is constant number, it's not will be 0
    // int a = 3, b = 4, c = 4;
    // printf("ans = %d", (c >= b >= a ? 100:200)); // result will be 200 because c >= b is correct so it will be 1 and 1>=a is wrong/
    // if (x >= 2)
        // printf("%d\n", x);
    int i = 10, j=40;
    // if((j-i)%10)
    //     printf("man sees your actions...");
    // else
    //     printf("god sees your motives...");//result is god sees your motives... because ((j-i)%10) = 0 and if(0) treated false in c
    float a = 0.7;
    // if(a < 0.7) //result will be true because float stored as something less than actual value. for get right result, use casting like (float)0.7 or declare variable with long double.
        // printf("stoned");
    // el se
        // printf("Avenged");
    int k = 12, n =0;
    k = (k > 5 && (n >= 0)? 100:200);
    // printf("k = %d", k);//error: lvalue required as left operand of assignment k = (k > 5 && n = 4? 100:200);
    int z = 10, l = 20;
    // if(!(!z) && z)
    //     printf("z = %d",z);
    // else
    //     printf("n = %d", l);

    // if(-1){
        // printf("something aras");
        // float m = 0.7;
        // printf("%d\n", sizeof(m));
        // printf("%d\n", sizeof(0.7));
        // printf("%d\n", sizeof( double));
        // printf("%d\n", sizeof(long double));

        // if(0.7 >0.7){
        //     printf("treu");
        // }
        // else{
        //     printf("false");
        // }

    // }

    checkRangeOfInteger();

}