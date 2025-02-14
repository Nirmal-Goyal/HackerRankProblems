// //Print all cubes of numbers from 1 to N 
#include <stdio.h>

int main() {

    int n;
    printf("enter the last num: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int a=i*i*i;
        printf("%d ", a);
    }
    return 0;
}