#include <stdio.h>
int sizeOfString(char str[]){
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++){
        counter++;
    }
    return counter;
}

void areSame(char str1[], char str2[], char str3[]){
    int x = sizeOfString(str1);
    int y = sizeOfString(str2);
    int z = sizeOfString(str3);
    int i;
    int j = 0;
    if(x ==  y ){
        for(i = 0; i < x && str1[i] == str2[i]; i++){
        }
        if( i == x){
            printf("true");
            j++;
        }
    }
    if(x == z && j != 1){

        for(i = 0; i < x && str1[i] == str3[i]; i++){
        }
        if(i == x){
            printf("true"); 
            j++;  
        }
    }
    if(y == z && j != 1){
        for(i = 0; i < y && str2[i] == str3[i]; i++){
        }
        if(i == y){
            printf("true");   
        }
    }
    if(j == 0){
        printf("false");
    }
}

void form(char str1[], char str2[]){
    int x = sizeOfString(str1);
    int y = sizeOfString(str2);
    int j = 0;
    int k = 0;
    printf("(");
    for(int i = 0; i < 2*x+y+3; i++){
        if(i < x){
            printf("%c", str1[i]);
        }
        else if(i == x){
            printf(")");
        }
        else if(i <= x+y){
            printf("%c", str2[j]);
            j++;
        }
        else if(i == x+y+1){
            printf("(/");
        }
        else if(i < 2*x+y+2){
            printf("%c", str1[k]);
            k++;
        }
        else{
            printf(")");
        }
    }
}

void count(char str[], char x){
    int l = sizeOfString(str);
    int counter = 0;
    for(int i = 0; i < l; i++){
        if(str[i] == x){
            counter++;
        }
    }
    printf("%d", counter);
}

void half(char str[]){
    int l = sizeOfString(str);
    for(int i = l/2; i < l; i++){
        printf("%c", str[i]);
    }
}

void reverse(char str[]){
    int l = sizeOfString(str);
    for(int i = l-1; i >= 0; i--){
        printf("%c", str[i]);
    }
}

void firstWord(char str[]){
    for(int i = 0; str[i] != ' '; i++){
        printf("%c",str[i]);
    }
}
void main(){
    // form("Hello", "World");
    // count("Hello", 'l');
    // half("HelloWorld");
    // reverse("World");
    // areSame("Hello", "World", "Helo");
    firstWord("may i help you!");
}