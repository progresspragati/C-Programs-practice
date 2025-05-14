#include <stdio.h>
int sizeOfString(char str[]){
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++){
        counter++;
    }
    return counter;
}
void removeChars(char str1[], char str2[]){
    int x = sizeOfString(str1);
    int y = sizeOfString(str2);
    printf("%c", '"');
    for(int i = 0; i < x; i++){
        int j;
         for(j = 0; j < y && str1[i] != str2[j]; j++){
         }
         if(j == y && str1[i] != str2[j]){
            printf("%c", str1[i]);
         }
    }
    printf("%c", '"');
}
void replace(char str1[], char str2[]){
    char str[sizeOfString(str1)];
    printf("%c",'"');
    for(int i = 0; i < sizeOfString(str1); i++){
        int j;
        for(j = 0; j < sizeOfString(str2) && str1[i] != str2[j]; j++){
        }
        if(j < sizeOfString(str2) && str1[i] == str2[j]){
            str[i] = str1[i];
            printf("%c", str[i]);
        }
        else{
            str[i] = '#';
            printf("%c", str[i]);
        }
    }
    printf("%c", '"');
}
void isPolindrome(char s[]){
    int x = sizeOfString(s);
    int i;
    for(i = 0; i < x/2 && s[i] == s[x-1-i]; i++){
    }
    if(s[i] != s[x-1-i]){
        printf("false");
    }
    else{
        printf("true");
    }
}
void isPermutation(char str1[], char str2[]){
    int x = sizeOfString(str1);
    int y = sizeOfString(str2);
    int counter = 0;
    if(x == y){
        for(int i = 0; i < x; i++){
            int j;
            for(j = 0; j < x && str1[i] != str2[j]; j++){
            }
            if(j < x && str1[i] == str2[j]){
                counter++;
            }
        }
        if(counter == x){
            printf("true");
        }
        else{
            printf("false");
        }
    }
    else{
        printf("false");
    }
}
void changeCase(char s[]){
    int x = sizeOfString(s);
    printf("%c", '"');
    for(int i = 0; i < x; i++){
        int y = s[i];
        if(y <= 'Z' && y >= 'A'){
            y = s[i] + 32;
            printf("%c",y);
        }
        else if(y >= 'a' && y <= 'z'){
            y = s[i] -32;
            printf("%c", y);
        }
        else{
            printf("%c",y);
        }
    }
    printf("%c", '"');
}
void removeExtraSpaces(char s[]){
    printf("%c", '"');
    for(int i = 0; i < sizeOfString(s); i++){
        if(s[i] != ' '){
            printf("%c", s[i]);
        }
        else if(s[i] == ' ' && s[i-1] != ' '){
            printf("%c", s[i]);
        }
        else{   
        }
    }
    printf("%c", '"');
}
void main(){
    // removeChars("paras","nishu");
    // replace("9990001","9");
    // isPolindrome("paras");
    // changeCase("Paras123");
    // isPermutation("how","who");
    removeExtraSpaces("hello    buddy");
}