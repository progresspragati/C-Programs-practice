#include <stdio.h>

int sizeOfString(char str[]){
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++){
        counter++;
    }
    return counter;
}

int smallestOfTwo(int x, int y){
    if(x > y){
        return y;
    }
    else{
        return x;
    }
}   

void count(char str1[], char str2[]){
    int counter = 0;
    for(int i = 0; i < smallestOfTwo(sizeOfString(str1), sizeOfString(str2)); i++){
        if(str1[i] == str2[i]){
            counter++;
        }
    }
    printf("%d", counter);
}

void isJavaFile(char s[]){
    int x = sizeOfString(s)-1;
    char r[] = {'a','v', 'a', 'j', '.'};
    for(int j = 0; j <= 4; j++){               
        if((s[x-j] == r[j])){
            if(j == 4){
                 printf("it is a java file = true");
            }
        }
        else{
             printf("it is a java file = false");
             return;
        }
    }
}

void occurs(char str1[], char str2[]){
    int counter = 0;
    for(int i = 0; i < sizeOfString(str1); i++){
        if(str1[i] == str2[0]){
            for(int j = 1; j < sizeOfString(str2); j++){
                if(str1[i+j] == str2[j]){
                    if(j == sizeOfString(str2)-1 && str1[i+j] == str2[j]){
                        printf("%s occour in %s = true", str2, str1);
                        return;
                        counter++;
                    }
                }
            }
        }
    }
    if(counter == 0){
        printf("%s occour in %s = false", str2, str1);  
    }
}

void countStringAppears(char s[]){
    int counter = 0;
    for(int i = 0; i < sizeOfString(s); i++){
        if(s[i] == 'c' && s[i + 1] == 'o'){
            if(s[i+2] == 'd' || s[i+2] == 'p' || s[i+2] == 'm'){
                if(s[i+3] == 'e'){
                    counter++;
                }
            }
        }
    }
    printf("%d", counter);
}

void countHello(char s[]){
    char r[] = "hello";
    int counter = 0;
    for(int i = 0; i < sizeOfString(s); i++){
        if(s[i] == r[0] || s[i] == 'H'){
            for(int j = 1; j < sizeOfString(r); j++){
                int k = s[i+j];
                int l = r[j];
                if(k == l || k == l-32){
                    if(j == (sizeOfString(r)-1)){
                        counter++;
                    }
                }
            }
        }
    }
    printf("%s comes %d times in %s", r,counter, s);
}

void batBall(char s[]){
    int counter = 0;
    int repeat = 0;
    for(int i = 0; i < sizeOfString(s)-2; i++){
        if(s[i] == 'b' && s[i+1] == 'a'){
            if(s[i+2] == 'l' && s[i+3] == 'l'){
                repeat++;
            }
            else if(s[i+2] == 't'){
                counter++;
            }
        }
    }
    if(counter == repeat){
        printf("bat and ball appears same numbers of time in %s = true", s);
    }
    else{
        printf("bat and ball appears same numbers of time in %s = false", s);
    }
}

void changeLetters(char s[]){
    for(int i = 0; i < sizeOfString(s) - 2; i++){
        if(s[i] == 't' && s[i+2] == 'p'){
            printf("%c%c", s[i], s[i+2]);
        }
    }
}

void main(){
    // count("New York", "New Delhi");
    // isJavaFile("hello.jav");
    // occurs("JavaLadders", "Java");
    // countStringAppears("count code now cope come");
    // countHello("Hi. Hello. Hello. Ok");
    // batBall("1bat2bat3ball4catch");
    changeLetters("tiptop");
}