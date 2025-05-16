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
void main(){
    addTwoNumericalCharStrings("2354","353464");
}