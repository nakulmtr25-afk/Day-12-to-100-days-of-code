// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
#include <math.h>
int main(){
    float a,b;
    char ops;
    printf("Enter number a : ");
    scanf("%f",&a);
    printf("Enter ops (+,-,*,/,%): ");
    scanf(" %c",&ops);
    printf("Enter number b : ");
    scanf("%f",&b);
    switch(ops){
        case'+': 
        printf("Result : %.2f",a + b);
        break;
        case'-': 
        printf("Result : %.2f",a-b);
        break;
        case'*': 
        printf("Result : %.2f",a*b);
        break;
        case'%': 
        printf("Result : %.2f", fmod(a, b));
        break;
        case'/': 
        printf("Result : %.2f",a/b);
        break;
    }
}