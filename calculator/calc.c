#include <stdio.h>
#include <string.h>

int main(void){
    int x, y;
    char op[10]; 
    printf("Welcome to calculator !!\n");
    printf("Enter your first number : \n");
    scanf("%d", &x);
    printf("Enter your second number : \n");
    scanf("%d", &y);
    printf("Enter the operator sign : \n");
    scanf("%s", &op);
    int add = x + y;
    int sub = x - y;
    int multiply = x * y;
    int divide = x / y;
   

   if (strcmp(op, "+") == 0){
        printf("Your addition results into %d", add);
    }else if(strcmp(op, "-") == 0){
        printf("Your subtracition results into %d", sub);
        
    }else if(strcmp(op, "*") == 0){
        printf("Your multiplication results into %d", multiply);
        
    }else if(strcmp(op, "/") == 0){
        printf("Your division results into %d", divide);
        
    }else{
        printf("Somethings not right");
    }
    return 0;

    
    
}