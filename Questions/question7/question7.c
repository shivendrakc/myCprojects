#include <stdio.h>

int main(void){
    int start_year = 1800;
    int end_year = 3000;
    for (int i = start_year; i <= end_year; i++)
    {   
        if (i % 400 == 0 || i % 4 == 0){
            printf("%d ", i);
        }
    }
    
}

