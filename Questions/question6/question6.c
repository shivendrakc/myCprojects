#include <stdio.h>

int main(void){
   char name[25];
   printf("Enter your first name : ");     //Yout input cant take space so enter first name only.
   scanf("%s", &name);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d. %s\n", i, name);
    }
    
}

