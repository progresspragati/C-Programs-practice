#include <stdio.h>
int sizeOfString(char str[]){
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++){
        counter++;
    }
    return counter;
}
void doubleChar(char str[]){
    printf("%c",'"');
    for(int i = 0; i < sizeOfString(str); i++){
        printf("%c%c", str[i], str[i]);
    }
    printf("%c",'"');
}
void join(char s1[], char s2[]){
    printf("%c",'"');
    for(int i = 0; i < sizeOfString(s1); i++){
        printf("%c%c", s1[i], s2[i]);
    } 
    printf("%c",'"');
}
void move(char s[]){
    printf("%c",'"');
    for(int i = 0; i < sizeOfString(s); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            printf("%c", s[i]);
        }
     }
     for(int i = 0; i < sizeOfString(s); i++){
        if( s[i] >= 'A' && s[i] <= 'Z'){
           printf("%c",s[i]);
        }
   }
    printf("%c",'"');
}
void swap(char s[]){
    printf("%c",'"');
    if(sizeOfString(s) > 1){
        for(int i = 0; i < sizeOfString(s); i++){
            if(i == sizeOfString(s)-2){
                printf("%c", s[i+1]);
            }
            else if(i == sizeOfString(s)-1){
                printf("%c", s[i-1]);
            }
            else{
                printf("%c", s[i]);
            }
        }
    }
    else{
        printf("%c", s[0]);
    }
    printf("%c", '"');
}
void combine(char s1[], char s2[]){
    printf("%c",'"');
    int x = sizeOfString(s1);
    int y = sizeOfString(s2);
    for(int i = 0; i < x || i < y; i++){
        if(x > y){
            if(i < y){
                printf("%c%c", s1[i], s2[i]);
            }
            else{
                printf("%c", s1[i]);
            }
        }
        if(x < y){
            if(i < x){
                printf("%c%c", s1[i], s2[i]);
            }
            else{
                printf("%c", s2[i]);
            }
        }
    }
    printf("%c", '"');
}
void main(){
    // doubleChar("Paras");
    // join("paras","nishu");
    // move("ParasPragati");
    // swap("paras");
    combine("Hi", "Hello");
}