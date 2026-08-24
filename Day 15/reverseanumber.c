// Q30: Write a program to reverse a given number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int rev = 0;
    while(n != 0){
        int rem = n%10;
        rev = rev*10 + rem;
        n /= 10;
    }
    printf("%d",rev);
    return 0;
}
