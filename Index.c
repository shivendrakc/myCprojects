#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Alphabet_Case/case.h"

int main(){
    char code[100];
    int num;
    printf("Enter your plain text : ");
    scanf("%[^\n]", &code);
    printf("Enter your Key : ");
    scanf("%d", &num);
    int key = abs(num);
    int code_num = strlen(code);
    for (int i = 0; i < code_num; i++)
    {
        if (code[i] >= 'A' && code[i] <= 'Z')
        {
            printf("%c", (code[i] - 65 + key) % 26 + 65);
        }
        else if (code[i] >= 'a' && code[i] <= 'z')
        {
            printf("%c", (code[i] - 97 + key) % 26 + 97);
        }
        else{
            printf("%c", code[i]);
        }
        
    }
    
}