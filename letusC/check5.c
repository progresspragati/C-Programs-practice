#include <stdio.h>

// check(ch)
// int ch;
// {
//     //ch >= 45? return (3.14) : return (6.28);//You cannot use return inside both parts of the ternary. It must be a single return, followed by the ternary expression.
//     return ch >= 45? 3.14 : 6.28;
// }

// void Q1(){
//     int i = 45;
//     float c;
//     c = check(i);
//     printf("c = %f", c);
// }

// areacircle(r)
// float r;
// {
//     // int a; // use float insted of int
//     float a;
//     a = 3.14*r*r;
//     printf("a = %f\n", a);
//     return(a);
// }

// void Q2(){
//     float area;
//     float radius = 2.0;
//     area = areacircle(radius);
//     printf("area = %f", area);
// }

// message(){
//     printf("Live and let live\n");
// }

// void Q3(){
//     int c;
//     printf("c before call = %d\n", c);
//     c = message();
//     printf("c after call = %d\n", c);
// }

// void Q4(){
//     // C(){ // we can call a function with in a body of another function but we can not write another function with in a body of another function.
//     //     c(){
//     //         printf("C is a C...\n");
//     //     }
//     //    printf("...ia a c ...\n"); 
//     // }
//     // printf("...is a sea afterall!");
// }

// add(ii)
// int ii;
// {
//     ++ii;
//     return (ii);
// }

// void Q5(){
//     int i = 3, k, l;
//     k = add(++i);
//     l = add(i++);
//     printf("i = %d k = %d l = %d", i, k, l);
// }

// function(j, b)
// int j, b;
// {
//     int c;
//     c = j+b;
//     return (c);
// }

// void Q6(){
//     int i = 135, a = 135, k;
//     k = function(!++i, !a++);
//     printf("i = %d a = %d k = %d", i, a, k);
// }

// func1(k)
// int k;
// {
//     k++;
//     return (k);
// }

// void Q7(){
//     int k = 35;
//     k = func1(k = func1 (k = func1 (k)));
//     printf("k = %d", k);
// }

// function1(m)
// int m;
// {
//     m++;
//     return (m);
// }

// func(m)
// int m;
// {
//     ++m; 
//     return (m = func1(++m));
// }

// void Q8(){
//     int k = 35, z;
//     z = func(k);
//     printf("z = %d", z);
// }

// void message1(){
//     printf("Only he will survive who is C- fit");
// }

// void Q9(){
//     void message1();// not an allowed type in function 
//     int c;
//     printf("c before call = %d\n", c);
//     c = message1();
//     printf("c after  call = %d", c);
// }

// packman(q, h)
// int q, h;
// {
//     q = q+q;
//     h = h+h;
//     return(q);
//     return(h);
// }

// void Q10(){
//     int p = 23, f = 23;
//     int k = packman(p,f);
//     printf("p = %d f = %d\n", p, f);
//     printf("%d %d", packman(p, f));
// }

// add(ii)
// int ii;
// {
//     ii++;
//     printf("ii = %d\n", ii);
// }

// void Q11(){
//     int i = 3, j;
//     j = add(++i++); // lvalue required as increment operand
//     printf("i = %d j = %d\n", i, j);
// }

// addsub(c, d)
//     int c, d;
// {
//     int x, y;
//     x = c-d;
//     y = c+d;
//     return(x, y);
// }

// void Q12(){
//     int i = 10, j = 20, k;
//     k = addsub(i, j);
//     printf("k = %d ", k);
// }

// display(c, d)
// int c, d;
// {
//     printf("%d %d\n", c, d);
// }

// show(c)
// int c;{
//     printf("%d", c);
// }

// void Q13(){
//     int i = 10, j = 20, k;
//     display(i);//needed two input but given one, so one correct output and second garbage value
//     show(i, j);//first value will be printed and second will be ignored
// }

// printit(a, ch){
//     printf("a = %d ch = %c", a, ch);
// }

// void Q14(){
//     char a = 65, ch = 'C';
//     printit(a, ch);
// }

// pri(i, a)
// {
//     printf("i = %d a = %f\n", i, a);
//     printf("a = %f i = %d\n\n", a, i);
// }

// printit1(a, i)
// float a;
// {
//     printf("a = %f i = %d\n", a, i);
//     printf("i = %d a = %f\n\n", i, a);
// }

// void Q15(){
//     float a = 3.14;
//     int i = 99;
//     pri(i, a);
//     printit1(a, i);
// }

// check (m)
// {
//     int m; //error: 'm' redeclared as different kind of symbol 
//     if(m > 40)
//         return (!m++);
//     else
//         return(!++m);
// }

// void Q16(){
//     int k = 35, z;
//     z = check(k);
//     printf("z = %d", z);
// }

// void Q17(){
//     int k = 35, *z, *y;
//     z = &k;
//     y = z;
//     *z++ = *y++;
//     k++;
//     printf("k = %d z = %d y = %d", k, z, y);
// }

// void Q19(){
//     int z = 4;
//     printf("%d ", printf("%d %d", z, z));//whenever printf function called it returns the number of characters it has successfully managed to print.
// }

// junk(i, j)
// int i, *j;
// {
//     i = i * i;
//     *j = *j**j;
// }

// void Q20(){
//     int i = -5, j = -2;
//     junk(i, &j);
//     printf("i = %d j = %d", i, j);
// }

// int *check(i,j)
// int i, j;
// {
//     int *p, *q;
//     p = &i;
//     q = &j;
//     i >= 45 ? return (p) : return (q);
// }

// void Q22(){
//     int *c;
//     int *check();
//     c = check(10, 20);
//     printf("c = %d", c);
// }

float *jamboree(r)
float *r;
{
    r = r+1;
    return(r);
}

void Q23(){
    // float *jamboree();
    float p = 23.5, *q;
    q = &p;
    printf(" q before call = %d\n", q);
    q = jamboree(&p);
    printf("q after call = %d\n", q);
}

void main(){
    // Q1();
    // Q2();
    // Q3();
    // Q4();
    // Q5();
    // Q6();
    // Q7();
    // Q8();
    // Q9();
    // Q10();// doubt
    // Q11();
    // Q12();
    // Q13();
    // Q14();
    // Q15();
    // Q16();
    // Q17();
    // Q19();
    // Q20();
    // Q22();
    // Q23();
     
}