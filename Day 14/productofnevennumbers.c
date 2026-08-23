// write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main (){
    int n,i;
    printf("Enter n : ");
    scanf("%d",&n);
    int multi = 1;
    
    for(i = 2;i <= n;i++){
        if(i%2 == 0 ){
        multi *= i;
    }
    
}
printf("%d",multi);
return 0;
}