// Q23: Write a program to calculate library fine based on late days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days days late: ₹6/day 
// More than 30 days: Membership Cancelled.
#include <stdio.h>
int main(){
    int latedays,latefee1,latefee2,latefee3,total;
    printf("Enter late days : ");
    scanf("%d",&latedays);
    if(latedays <= 5){
        latefee1 = latedays*2;
        printf("%d",latefee1);
    }
    else if(latedays >5 && latedays <= 10){
        latefee2 = latedays*4;
        total = (5 * 2) + ((latedays - 5) * 4);
        printf("%d",total);
    }else if(latedays >10 && latedays <= 30){
        latefee3 = latedays*6;
        total = (5 * 2) + ((latedays - 10) * 6) +(5*4);
        printf("%d",total);
    }
    else {
        printf("Membership cancelled");
    }

    return 0;
}
