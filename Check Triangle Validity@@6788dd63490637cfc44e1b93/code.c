#include <stdio.h>

int main() {
    
    int side1,side2,side3;

    if(((side3 < side1 + side2) && (side1 < side2 + side3) &&(side2 < side1 + side3))){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}