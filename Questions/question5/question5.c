#include <stdio.h>

int palindrome(int num){
    int orginal;
    orginal = num;
    int reversed = 0;
    while(num != 0){
        reversed = reversed*10 + num%10;
        num = num/10;
    }
    if (orginal == reversed)
    {
        return 1;
    }else{
        return 0;
    }
    
}
int main(void){
    int n;
    printf("Enter a number to find if its palindrome : ");  //If the number is same after reversing it, then it is called palindrome number
    scanf("%d", &n);
    if (palindrome(n)){
        printf("The number is palindrome");
    }else{
        printf("The number is not a palindrome");
    }
    return 0;
}

