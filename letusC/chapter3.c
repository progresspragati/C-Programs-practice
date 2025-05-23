#include <stdio.h>

void calculatePopulationOfRandW(){
    int population_R;
    int population_W;
    float a = 0.001, b = 0.005, c = 0.00001, d = 0.01;
    printf("enter the population of Rabbit and Wolf = ");
    scanf("%d %d", &population_R, &population_W);
    for(int i = 1; i <= 1000; i++){
        int r = population_R;
        population_R = (1+a)*population_R - c*population_R*population_W;
        population_W = (1-b)*population_W + c*d*r*population_W;
        // if(i < 3){
        //   printf("population of rabbit = %d\npopulation of wolf = %d\n", population_R, population_W);  
        // }
        if(i%25 == 0){
            printf("population of rabbit = %d\npopulation of wolf = %d\n", population_R, population_W);
        }
    }
    printf("population of rabbit = %d\npopulation of wolf = %d\n", population_R, population_W);
}

void netProfit(){
    float s = 100;
    float c = 500;
    float op_cost = 10000;
    float ad_cost = 1000;
    float net_profit1 =0;
    float net_profit2 = s*c - op_cost -ad_cost;
    printf("%f\n", net_profit2);
    ad_cost = 2*ad_cost;
    for(; net_profit2 >= net_profit1; ad_cost*= 2){
        net_profit1 = net_profit2;
        s = s*120/100;
        net_profit2 = s*c - op_cost -ad_cost;
        printf("%f\n", net_profit2);
    }
    printf("sales of super duper just before the profit begiin to decline = %f\n", s*100/120);
    printf("ad_cost just before ther profit begin to decline = %f\n", ad_cost/4);
    printf("net profit just before the profit begin to  decline = %f\n", net_profit1);
}

void integerCoordinate(){
    int r;
    printf("enter the  radius of a circle = ");
    scanf("%d", &r);
    for(int i = 0; i <= r; i++){
        for(int j = 0; j <= r; j++){
            if(i*i + j*j == r*r){
                printf("coordinate of circle(x, y) = (%d, %d)\n", i, j);
            }
        }
    }
}

void combination(){
    for(int i = 1; i <= 10; i++){
        for(int j = i+1; j <= 10 && i < j; j++){
            for(int k = j+1; k <= 10 && j < k; k++){
                int l = i+j+k;
                if(l <= 10){
                        printf("i = %d j = %d k = %d l = %d\n", i, j, k, l);
                }
            }
        }
    }
}

void perfectSquare(){
    for(int i = 32; i < 100; i++){
        int x = (i*i)/100;
        int y = (i*i)%100;
        int counter = 0;
        for(int j = 2; j < 10; j++){
            if(j > 3 && x/j == j && x%j == 0){
                counter++;
            }
            if(y/j == j && y%j == 0){
                counter++;
            }
        }
        if(counter == 2){
            printf("%d  ", i*i);
        }
    }
}

void perfectSquareInFormOfAABB(){
    for(int i = 32; i < 100; i++){
        int w = (i*i)/1000;
        int x = ((i*i)/100)%10;
        int y = ((i*i)%100)/10;
        int z = (i*i)%10;
        if((w == x) && (y == z) ){
            if( x != y){
                printf("%d\n", i*i);
            }
        }
    }
}

void main(){
    calculatePopulationOfRandW();
    // netProfit();
    // integerCoordinate();
    // combination();
    // perfectSquare();
    // perfectSquareInFormOfAABB();
}