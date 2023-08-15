#include <stdio.h>
#include <string.h>

int upper(char string[]){
    int n = strlen(string);
    for (int i = 0; i < n; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            printf("%c", string[i] - 32);
        }else{
            printf("%c", string[i]);
        }
    }
}
int lower(char string[]){
    int n = strlen(string);
    for (int i = 0; i < n; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            printf("%c", string[i] + 32);
        }else{
            printf("%c", string[i]);
        }
        
    }
    
}