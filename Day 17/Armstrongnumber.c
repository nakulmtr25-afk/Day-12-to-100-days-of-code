// Q33: Write a program to check if a number is an Armstrong number.
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int og = n;
     int count = 0;
     while (n != 0) {
     n /= 10;
     count++;
     }
     n = og;
     int sum =0;
     int rem ;
     while(n != 0){
     rem = n%10;
     sum += (int)round(pow(rem,count));
     n /= 10;
     }
     if (sum == og){
        printf("Armstrong Number");
     }
     else{
        printf("Not an armstrong number");
     }
     return 0;
}