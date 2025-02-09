#include <stdio.h>

int main() {

    int A;
    printf("enter the angle: ");
    scanf("%d", &A);

    A = A%360;

    if(A>=0 && A<90){
        printf("Acute Angle");
    }
    else if(A==90){
        printf("Right Angle");
    }
    else if(A>90 && A<180){
        printf("Obtuse Angle");
    }
    else if(A==180){
        printf("Straight Angle");
    }
    else if(A>180 && A<360){
        printf("Reflex Angle");
    }
    else if(A==360){
        printf("Full Rotation");
    }
        
    return 0;
}
