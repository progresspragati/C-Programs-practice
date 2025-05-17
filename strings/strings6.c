#include <stdio.h>
int sizeOfString(char str[]){
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++){
        counter++;
    }
    return counter;
}

int largestOfTwo(int x, int y){
    if(x < y){
        return y;
    }
    else{
        return x;
    }
}  

void addTwoNumericalCharStrings(char s[], char r[]){
    int x = sizeOfString(s);
    int y = sizeOfString(r);
    int k = largestOfTwo(x,y);
    char add[k+1];
    add[k] = (((s[x-1]-48)+(r[y-1]-48))%10)+48; 
    for(int i = 2; i <= k+1; i++){
        if(x <= y){
            if(i <= x){
                add[k+1-i] = (((s[x-i]-48)+(r[y-i]-48))%10) + 48 + (((s[x-i+1]-48)+(r[y-i+1]-48))/10); 
            }
            else if(i != k+1){
                if(i == x+1){
                    add[k+1-i] = (((r[y-i]-48))%10) + 48 + (((s[x-i+1]-48)+(r[y-i+1]-48))/10);  
                }
                else{
                   add[k+1-i] = (((r[y-i]-48))%10) + 48 + ((r[y-i+1]-48)/10);   
                }
            }
            else{
                    add[0] = (r[y-i+1]-48)/10 + 48;
            }
        }
        if(x > y){
            if(i <= y){
                add[k+1-i] = (((s[x-i]-48)+(r[y-i]-48))%10) + 48 + (((s[x-i+1]-48)+(r[y-i+1]-48))/10);
            }
            else if(i != k+1){
                if(i == y+1){
                    add[k+1-i] = (((s[x-i]-48))%10) + 48 + (((s[x-i+1]-48)+(r[y-i+1]-48))/10);   
                }
                else{
                    add[k+1-i] = (((s[x-i]-48))%10) + 48 + ((s[x-i+1]-48)/10);   
                }
                
            }
            else{
                add[0] = (s[x-i+1]-48)/10 + 48;
            }
        }
    }
    for(int i = 0; i < k+1; i++){
        printf("%c", add[i]);
    }
}

void removeChar(char s[]){
    printf("%c", s[0]);
    for(int i = 1; i < sizeOfString(s); i++){
        for(int j = 0; j < i; j++){
            if(s[i] != s[j]){
                if(j == i-1){
                    printf("%c",s[i]);
                }
            }    
        }
    }
}

void mostFrequent(char s[]){
    char k = s[0];
    int counter[sizeOfString(s)];
    int j = counter[0];
    for(int i = 1; i < sizeOfString(s); i++){
        counter[i] = 0;
        for(int j = 0 ; j < i; i){
            if(s[i] == s[j]);{
                counter[i]++;
            }
        }
    }
    for(int i = 1; i < sizeOfString(s); i++){
        if(j < counter[i]){
            j = counter[i];
            k = s[i];
        }
    }
    printf("most frequent character in %s is = %c", s, k);
}

void solve(char s[]){
    int d1 = 0;
    int d2 = 0;
    char a = '\0';
    for(int i = 1; i < sizeOfString(s); i++){
        if(s[i] == '+' || s[i] == '-'){
            if(s[i] == '+'){
                a = '+';
            }
            else{
                a = '-';
            }
        }
        else if( a == '\0'){
            d1 = d1*10 + (s[i]-48);
        }
        else{
            d2 = d2*10 + (s[i]-48);
        }
    }
    if(a == '+'){
        a = d1+d2;
    }
    else{
        a = d1-d2;
    }
}

void main(){
    // int arr[5] = {};
    // for(int i = 0; i < 5; i++){
    //     printf("%d\n", arr[i]);
    // }
    // addTwoNumericalCharStrings("2354","353464");
    removeChar("hello");
    // mostFrequent("122333444455555");
    // solve("34+45");
}