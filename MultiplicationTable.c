// print the multiplication table of a given number n from 1 to 10
#include <stdio.h>

int main() {

    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    for(int i=1; i<=10; i++){
        int res=n*i;
        printf("%d x %d = %d\n", n, i, res);
    }
    return 0;
}