#include <stdio.h>

int main(void){
    int num = 1;
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {  
        num = 4 * i - 3;                        // formula for the given series is 4n-3
        sum += num;                                            
    }
    printf("The sum of first 10 terms of the given series is %d", sum);
}

