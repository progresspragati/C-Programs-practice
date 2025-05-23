#include <stdio.h>

void getSizeOf(){

    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of signed char: %zu byte(s)\n", sizeof(signed char));
    printf("Size of unsigned char: %zu byte(s)\n", sizeof(unsigned char));

    printf("Size of short: %zu byte(s)\n", sizeof(short));
    printf("Size of unsigned short: %zu byte(s)\n", sizeof(unsigned short));

    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of unsigned int: %zu byte(s)\n", sizeof(unsigned int));

    printf("Size of long: %zu byte(s)\n", sizeof(long));
    printf("Size of unsigned long: %zu byte(s)\n", sizeof(unsigned long));

    printf("Size of long long: %zu byte(s)\n", sizeof(long long));
    printf("Size of unsigned long long: %zu byte(s)\n", sizeof(unsigned long long));

    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));
    printf("Size of long double: %zu byte(s)\n", sizeof(long double));

    printf("Size of _Bool: %zu byte(s)\n", sizeof(_Bool));
    printf("Size of void*: %zu byte(s)\n", sizeof(void*));
    printf("Size of int*: %zu byte(s)\n", sizeof(int*));
}

void main(){
    int x = 0;
    int um7 = 0;
    int cut5m;
    // int 7 = 9;  a number can not be a variable.
    int f4 = 19;
    // int 4f = 34; a variable starting with a number is not allowed.
    // int %s = 9; starting with a special character in a variable is not allowed.
    int _e =24; //_ is alloweded in a variable.
    int Word = 9;
    int xyz_abc = 23;
    // int xyz@abc = 3; special character not alloweded between variable name.
    char m3 = 'a';
    int abcdefghijklmnopqrstuvwxyz_abcdefghijklmnopqrstuvwxyz_abcdefghijklmnopqrstuvwxyz = 2;
    // int do = 3; keywords not allowed in variables name .
    int DO = 4;
    int _3 = 4;
    // int avg. = 4;
    // int ass ssd = 45;
    float z = 124.345;
    int y = 0xab45;
    // int q = 0Xab45;
    // printf("%d %d %d %d", 72, 072, 0x72, 0X72); //072 means it is octal number.  int number starting with 0 is a octal number and starting with 0x is a hexadecimal.
    // printf("%d %o %x\n", 72, 72, 72); 
    // printf("%d %o %x", 72, 072, 0x72);
//     printf("%d %c\n"); 
//     printf("%d%c\n");
//     printf("%d %f %f\n");
    // int a = -3 - -3;
    // int b = -3 - -(-3);
    // printf("%d %d ", a, b);
    // int c = 3*4%5;
    // printf("%d", c);
    // printf("%d %d %d %d", 4/3, 4/-3, -4/3, -4/-3);
    // printf("%d %d %d %d", 4%3, 4%-3, -4%3, -4%-3);
    // float a = 5;
    // float b = 2;
    // float c;
    // c = a / b;
    // // getSizeOf();
    // int d = 3*4 - 7^8;
    // printf("%d\n", d);
    // short g = 300*300/300;
    // printf("%hd", g);
    // float a = 4;
    int i = 2;
    // printf("%d\n", sizeof(4)/sizeof(2.0));
    // printf("%d\n", sizeof(2.0)/sizeof(4));
    int p,q;
    // scanf("enter values of p and q %d %d", &p, &q);
    // scanf("%d %d", &p, &q); //review it
    // printf("p = %d q = %d", p, q);//review it
    // printf("Enter the values of p and q");
    // scanf("%d\n\n%d", &p, &q);//by adding \n\ between two specifier does not affect scanf 
    // scanf("%d%d", p, q);
    // printf("p = %d q = %d", p, q);
    // int b = 2.5;
    // int b = (int) 2.5;
    // float cb = (float) 2;
    // printf("%d %f\n", 4, 6);
    // printf("%d %f\n", 40, 150.0);
    int a = 2e5;
    double b = 3.4e100;
    printf("a = %d b = %f\n", a,b);
    
}


