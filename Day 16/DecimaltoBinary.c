// Q31: Write a program to take a number as input and print its equivalent binary representation.


#include<stdio.h>
int main(){
    int n;
     printf("Enter number : ");
     scanf("%d",&n);
     int binary =0;
     int place = 1;
     while(n != 0){
        int rem = n%2;
        binary = binary + place*rem;
        place *= 10;
        n /= 2;
     }
     printf("%d",binary);
}