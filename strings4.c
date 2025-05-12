#include <stdio.h>
int sizeOfString(char str[]){
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++){
        counter++;
    }
    return counter;
}
int largest(int x, int y, int z){
    if((x >= y) && (x >= z)){
        return x;
    }
    else if((y >= x) && (y >= z)){
        return y;
    }
    else{
        return z;
    }   
}
char middleChar(char x,char y,char z){
    if((x != '\0') && ((x <= y && (x >= z && z != '\0')) || (x <= z && x >= y && y != '\0'))){
        return x;
    }
    if((y != '\0') && ((y <= x && (y >= z && z != '\0')) || (y <= z && y >= x && x != '\0'))){
        return y;
    }
    if(z != '\0'){
        return z;
    }
}
void middleWord(char w1[], char w2[], char w3[]){
    int x = sizeOfString(w1);
    int y = sizeOfString(w2);
    int z = sizeOfString(w3);
    char w[largest(x,y,z)];
    for(int i = 0; i < largest(x,y,z); i++){
        w[i] = middleChar(w1[i], w2[i], w3[i]);
    }
    printf("%c%s%c",'"',w,'"');
}
void larger(char s1[], char s2[]){
    int x = sizeOfString(s1);
    int y = sizeOfString(s2);
    if(x != y){
        if(x > y){
            printf("%s",s1);
        }
        else{
            printf("%s",s2);
        }
    }
    else{
        printf("%c",'"');
        for(int i = 0; i < x; i++){
            if(s1[i] > s2[i]){
                printf("%c", s1[i]);
            }
            else{
                printf("%c", s2[i]);
            }
        }
        printf("%c",'"');
    }
}
void toNumber(char s[]){
    for(int i = 0; i < sizeOfString(s); i++){
        printf("%c", s[i]);
    }
}
int power(int x, int y){
    int pow = 1;
    for(int i = 1; i <= y; i++){
        pow = pow*x;
    }
    return pow;
}
void convert(char s[]){
    int j = sizeOfString(s)-1;
    int x = 0;
    for(int i = 0; i < sizeOfString(s); i++){
        x = x+(s[i]*power(2, j));
        j--;
    }
    printf("%d\n",x);
    printf("%d", power(2, 2));
}
void convertToBinary(int n){
    int i;
    int s[i+1];
    printf("%c", '"');
    for(i = 0; n > 1; i++){
        s[i] = n%2;
        n = n/2;
    }
    s[i] = n%2;
    for(int j = i; j >= 0; j--){
        printf("%d", s[j]);
    }
    printf("%c", '"');
}
void main(){
    // middleWord("said","saik","sit");
    // larger("1234","1235");
    // toNumber("1200");
    // convert("100");
    convertToBinary(1234);
}