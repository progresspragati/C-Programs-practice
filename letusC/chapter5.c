#include <stdio.h>

void NumberOfDays(){
    int d1, d2, m1, m2, y1, y2, number_days = 0;
    char c;
    printf("enter the first date = ");
    scanf("%d", &d1);
    printf(" %c", ',');
    scanf("%d", &m1);
    printf(" %c", ',');
    scanf("%d", &y1);
    // scanf("%d %c %d %c %d", &d1, &c, &m1, &c, y1);
    printf("\nenter the second date = ");
    scanf("%d", &d2);
    printf(" %c", ',');
    scanf("%d", &m2);
    printf(" %c", ',');
    scanf("%d", &y2);
    // scanf("%d %c %d %c %d", &d2, &c, &m2, &c, &y2);
        for(int i = m1; i < m2; i++){
        if(i == 2){
          number_days = number_days + 28;     
        }
        else if(i <= 7){
            if(i%2 == 0){
                number_days = number_days + 30;
            }
            else{
                number_days = number_days + 31;
            }
        }
        else{
            if(i%2 == 1){
                number_days = number_days + 30;
            }
            else{
                number_days = number_days + 31;
            }
        }
    }
    number_days = number_days + (d2-d1) + (y2-y1);
    printf("number of days between %d,%d,%d and %d,%d,%d = %d days", d1, m1, y1, d2, m2, y2, number_days-1);
}

void main(){
   NumberOfDays(); 
}