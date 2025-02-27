// Print "YES" if 𝑁 is a palindrome, otherwise print "NO".
#include <stdio.h>

int main() {

    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    int initial = n;
    int reverse = 0;
    
    printf("is num is palindrome: ");
    while(n!=0){
        reverse = reverse*10 + n%10;
        n = n/10;
    }
    if(reverse==initial){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}