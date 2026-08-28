// Q37: Write a program to find the LCM of two numbers.
#include<stdio.h>
int main(){
    int a,b,lcm;
    printf("Enter Number a : ");
    scanf("%d",&a);
    printf("Enter Number b : ");
    scanf("%d",&b);
    for(int i =1; ; i++){
        if(i%a == 0 && i%b == 0){
            lcm = i;
            break;
        }
    }
    printf("%d",lcm);
}