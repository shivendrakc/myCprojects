#include <stdio.h>

int main(void){
    int starting_number, ending_number, sum = 0;
    printf("Enter a starting number : ");
    scanf("%d", &starting_number);
    printf("Enter a ending number : ");
    scanf("%d", &ending_number);

    for (int i = starting_number; i <= ending_number; i++)
    {
        sum += i;
    }
    printf("The sum of numbers between %d and %d = %d",starting_number, ending_number, sum);
}

