#include <stdio.h>

int main(void){
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    if (0 == x % 2){
        printf("Number is even");
    }else{
        printf("Number is odd");
    }
}
