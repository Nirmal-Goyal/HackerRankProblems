// Print the first n terms of the AP
#include <stdio.h>

int main() {

    int n;
    printf("num of terms you want in AP: ");
    scanf("%d", &n);
    int a, d;
    printf("enter the 1st term: ");
    scanf("%d", &a);
    printf("enter the common difference: ");
    scanf("%d", &d);
    for(int i=1; i<=n; i++){
        int ap=(a + d*(i-1));
        printf("%d ", ap);
    }
    return 0;
}