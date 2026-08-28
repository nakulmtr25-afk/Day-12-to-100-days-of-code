// Q36: Write a program to find the HCF (GCD) of two numbers.




#include<stdio.h>
int main(){
    int a,b,hcf =1;
    printf("Enter number a: ");
    scanf("%d",&a);
    printf("Enter number b: ");
    scanf("%d",&b);
    for(int i = 1;i<=a && i<=b;i++){
        if(a%i == 0 && b%i ==0){
           hcf = i;
        }
    }
    printf("hcf = %d",hcf);
    return 0;
}