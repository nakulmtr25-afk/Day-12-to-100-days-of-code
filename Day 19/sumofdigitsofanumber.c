// Q38: Write a program to find the sum of digits of a number.

#include<stdio.h>
int main(){
    int n ;
    printf("Enter number : ");
    scanf("%d",&n);
    int sum = 0;
    while(n != 0){
    sum+= n%10;
    n /= 10;
    }
    printf("%d",sum);
    return 0;
}