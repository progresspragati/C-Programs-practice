#include <stdio.h>
int sizeOfString(char str[]){
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++){
        counter++;
    }
    return counter;
}

int smallest(int x, int y, int z){
    if((x <= y) && (x <= z)){
        return x;
    }
    else if((y <= x) && (y <= z)){
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

int smallestOfTwo(int x, int y){
    if(x > y){
        return y;
    }
    else{
        return x;
    }
}

char* smallestWord(char w1[], char w2[]){
    int x = sizeOfString(w1);
    int y = sizeOfString(w2);
    for(int i = 0; i < smallestOfTwo(x,y); i++){
        if(w1[i] == w2[i]){
        }
        else if(w1[i] < w2[i]){
            // printf("%s", w1);
            return w1;
        }
        else{
            // printf("%s", w1);
            return w2;
        }
    }
    if(smallestOfTwo(x,y) == x){
        return w1;
    }
    else{
        return w2;
    }
}

int isSame(char s1[], char s2[]){
    int x = sizeOfString(s1);
    int y = sizeOfString(s2);
    if(x == y){
        for(int i = 0; i < x && s1[i] == s2[i]; i++){
             if(s1[i] == s2[i]){
                if(i == x-1){
                return 1;
                }
             }
             else{
                return 0;
             }
        }
    }
    else{
        return 0;
    }
}

void middleWord(char w1[], char w2[], char w3[]){
    int x = sizeOfString(w1);
    int y = sizeOfString(w2);
    int z = sizeOfString(w3);
    if(isSame(smallestWord(w1,w2), smallestWord(w1,w3)) == 1){
        printf("%s",smallestWord(w2,w3));
    }
    else if(isSame(smallestWord(w1,w2), smallestWord(w2,w3)) == 1){
        printf("%s", smallestWord(w1,w3));
    }
    else{
        printf("%s",smallestWord(w1,w2));
    }
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

int returnDigit(char i){
    return i - '0';
}

void convert(char s[]){
    int j = sizeOfString(s)-1;
    int x = 0;
    for(int i = 0; i < sizeOfString(s); i++){
        x = x+(returnDigit(s[i])*power(2, j));
        j--;
    }
    printf("%d\n",x);
}

void convertToBinary(int n){
    int i;
    char s[i+1];
    printf("%c", '"');
    for(i = 0; n > 1; i++){
        s[i] = n%2+48;
        n = n/2;
    }
    s[i] = n%2+48;
    for(int j = i; j >= 0; j--){
        printf("%c", s[j]);
    }
    printf("%c", '"');
}

void main(){
    middleWord("abcd","bcd","mcd");
    // larger("1234","1235");
    // toNumber("1200");
    // convert("100");
    // convertToBinary(1234);
    //  printf("%s", smallestWord("baid","aai"));
    // printf("%d",isSame("hello","hell"));
}