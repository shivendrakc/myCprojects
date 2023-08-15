#include <stdio.h>

int main(void){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("The sum of numbers from 1 to %d = %d", n, sum);
}

