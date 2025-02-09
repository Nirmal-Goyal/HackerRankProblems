#include <stdio.h>

int main() {

    int year;
    printf("enter the year: ");
    scanf("%d", &year);
    
    if(year %100 == 0){
        if(year %400 == 0){
            printf("Yes, %d is a leap year.",year);
        }
        else{
            printf("No, %d is not a leap year.",year);
        }
    }
    else if(year %4 == 0){
        printf("Yes, %d is a leap year.\n",year);
    }
    else {
        printf("No, %d is not a leap year.\n",year);
    }

    return 0;
}