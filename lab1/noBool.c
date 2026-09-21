#include <stdio.h>
#include <math.h>

int main(){

    int x;
    double y;
    printf("Enter x: ");
    scanf("%d", &x);

    if (x >= 0){
        if(x < 7){
            y = -6*pow(x,2) + 8;
            printf("Y: %f\n", y);
 
        } else if(x >= 11){
            y = -pow(x,3)/7 + 10;
            printf("Y: %f\n", y);

        } else{
            printf("Y doesn't exist.\n");
        }
        
    } else if (x <= -10){
        y = -pow(x,3)/7 + 10;
        printf("Y: %f\n", y);

    } else{
        printf("Y doesn't exist.\n");

    }

    return 0;

}