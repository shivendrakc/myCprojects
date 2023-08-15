#include <stdio.h>

int main(void){
    int num;
    printf("Enter a number to print out its table : ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    
    
}

