// Q32: Write a program to check if a number is a palindrome.


#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int original = n;
    int rev =0;
    while(n != 0){
        int rem = n%10;
        rev = rev*10 +rem;
        n /= 10;
    }
    if(rev == original){
        printf("%d Palindrome",original);
    }
    else {
        printf("%d not a palindrome number",original);
    }
}