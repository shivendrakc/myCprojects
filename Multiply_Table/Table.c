#include <stdio.h>

int multiplication_table(int num1,int num2){
    int i = num1;

        for (int j = 1; j <= num2; j++)
        {
            int multiply = i*j;
            printf("%d x %d = %d \n", i, j, multiply);
        }
        printf("\n");
}

int main(void){
    int table_num, table_length;
    printf("Enter the number to get the multiplication table: ");
    scanf("%d", &table_num);
    printf("Enter the number to get the length of table: ");
    scanf("%d", &table_length);
    multiplication_table(table_num, table_length);
}