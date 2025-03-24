// returns the most frequent digit in a given number n. If there is a tie in frequency, return the largest of those digits
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the num: ");
    scanf("%d", &n);

    int frequency[10]={0};
    while(n>0){
        int digit = n%10;
        frequency[digit]++;
        n/=10;
    }
    
    int max = frequency[0];
    int index=0;
    for(int i=0; i<10; i++){
        if((frequency[i]>max) || (frequency[i]==max && i>index)){
            max = frequency[i];
            index=i;
        }
    }
    printf("most frequent digit is: %d", index);
    return 0;
}