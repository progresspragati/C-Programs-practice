#include <stdio.h>

void switch_Q1(){
    int i;
    printf("enter any number = ");
    scanf("%d", &i);
    switch(i){
        case 1://don't use space between case and number
            printf("Do\n");
        case 2:
            printf("Re\n");
        case 3:
            printf("Me\n");
        // case default: //error during compilation. because, in a switch, the default must be specified simply as default, and not case default.
        default: //error during compilation. because, in a switch, the default must be specified simply as default, and not case default.
            printf("Fa So La Ti Do");
    }
}

void switch_Q2(){
    int i = 3;
    // printf("enter any number = ");
    // scanf("%d", &i);
    switch(i)
    {
        case 1:
            printf("au revoi!");
        case 2:
            printf("adieu!");
            break;
        case 3:
            //continue; //continue works only with loops, never with switch;
        default: 
            printf("plain simple goodbye!");    
    }
}

void  switch_Q3(){
    char s = 3;
    switch(s){
        case '1':
            printf( "Baboons\n");
        case '2':
            printf("Seagherkins\n");
        default:
            printf("Bucaneers\n");
    }
    printf("Gallows fodder");
}

void switch_Q4(){
    int k = -2, j = 4;
    switch(k /= j/k){
        default:
            printf("All are same!\n");
        case 0:
            printf("Happy birthday\n");
        case 1:
            printf("A punch on the mouth\n");
        case 2:
            printf("A kick in the back\n");
    }
}

void main(){
    // switch_Q1(); 
    // switch_Q2();//warning: return type defaults to 'int' [-Wimplicit-int]
    // switch_Q3();
    switch_Q2();
}