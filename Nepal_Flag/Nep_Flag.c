#include <stdio.h>
#include <string.h>
int Nep_Flag(int num);

int main(void){
    int row;
    printf("Enter number of rows for your flag : ");
    scanf("%d", &row);
    Nep_Flag(row);
    Nep_Flag(row*1.5);
}

int Nep_Flag(int num){
     for (int i = 0; i <= num; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("* ");
            }
            if(i != num){
                printf("\n");
            }
        }
}