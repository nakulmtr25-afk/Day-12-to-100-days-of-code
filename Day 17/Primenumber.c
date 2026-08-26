//Q34: Write a program to check if a number is prime.
#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int i;
    for( i = 2;i<n;i++){
        if(n%i == 0){
            break;
            
        }
    }
    if(i == n){
        printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }
    return 0;
}