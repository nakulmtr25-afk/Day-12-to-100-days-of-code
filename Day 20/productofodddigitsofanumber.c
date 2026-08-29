// Q39: Write a program to find the product of odd digits of a number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    
    int mul = 1;
    while(n != 0){
    int d = n%10;
     if(d % 2 != 0){
        mul *= d;
                }
        n /=  10;
    }
    printf("%d",mul);
    return 0;
}