#include <stdio.h>

void netAmountPayable(){
    char Customer;//{"Industrial", "Government", "University"};
    int microprocessor_bit; //= {"08-bit", "16-bit", "32-bit"};
    float order;
    printf("enter the type of Customer = ");
    scanf("%c", &Customer);
    printf("enter the type of microprocessor of bit = ");
    scanf("%d", &microprocessor_bit);
    printf("enter the amount of order = "); 
    scanf("%f", &order); 
    if(microprocessor_bit == 8){
        printf("net payable amount = %f", order*90/100);
    }
    else if(microprocessor_bit == 16){
        if(order < 10000){
            printf("net payable amount = %f", order);
        }
        else{
            if(Customer == 'G'){
                printf("net payable amount = %f", order*94/100);
            }
            else{
                printf("net payable amount = %f", order*95/100);
            }
        }
    }
    else{
        if(Customer =='U'){
            printf("net payable amount = %f", order*92.5/100);
        }
        else if(order >= 100000){
            printf("net payable amount = %f", order*90/100);
        }
        else if(order >= 50000){
            if(Customer == 'I'){
                printf("net payable amount = %f", order*92.5/100);
            }
            else{
                printf("net payable amount = %f", order*91.5/100);
            }
        }
        else{
            if(Customer == 'I'){
                printf("net payable amount = %f", order*95/100);
            }
            else{
                printf("net payable amount = %f", order*93.5/100);
            }
        }
    }
}

void costOfPremium(){
    int age_driver;
    char m;
    int num_accident;
    char j;
    scanf("%c", &j);
    for(; j == '\n'; ){
        printf("enter the age of driver = ");
        scanf("%d", &age_driver);
        printf("enter in which country the car is manufactured = ");
        scanf(" %c", &m);
        printf("enter the number of accident in 3 years = ");
        scanf("%d", &num_accident);
        if(age_driver >= 25)  {
            if(m == 'i' ){
                if(num_accident == 0){
                    printf("comprehensive insurance policy with 6 percent premium of declared value of the car");
                }
                else{
                    printf("comprehensive insurance policy with 7 percent premium of declared value of the car and policy holder have to pay first 100rs of a claim");
                }
            } 
            else{
                if(num_accident == 0){
                printf("comprehensive insurance policy with 6 percent premium of declared value of the car and policy holder have to pay first 100rs of any claim"); 
                }
                else{
                    printf("a third party policy is issued with 7 percent premium charged");
                }
            }
        }
        else{
            if(num_accident == 0){
                if(m == 'i'){
                    printf("comprehensive insurance policy with 6 percent premium of declared value of the car and policy holder have to pay first 100rs of a claim");  
                }
                else {
                    printf("comprehensive insurance policy with 8 percent premium of declared value of the car and policy holder have to pay first 100rs of any claim");
                }
            }
            else{
                printf("no policy car be taken out");
            }
        }
        scanf(" %c", &j);
    }
}

void numOfDigits(){
    int n;
    int counter = 0;
    printf("enter the number = ");
    scanf("%d", &n);
    if(n < 100000){
        if(n > 9){
            counter++;
            n = n/10;
            if(n > 9){
                counter++;
                n = n/10;
                if(n > 9){
                    counter++;
                    n = n/10;
                    if(n > 9){
                        counter++;
                        n = n/10;
                    }
                }
            }
        }
        printf("number of digits in %d is = %d", n, counter+1);
    }
    else{
        printf("invalid input");
    }
}

void main(){
    // netAmountPayable();
    // costOfPremium();
    numOfDigits();
}