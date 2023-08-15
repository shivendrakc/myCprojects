#include <stdio.h>
int right_angle_pyramid(int height);
int right_angle_pyramid_upsidedown(int height);
int rt_ang_pyramid_left_aligned(int height);
int rt_ang_pyramid_left_aligned_upsidedown(int height);
int normal_pyramid(int height);
int double_pyramid(int height);


int main(void){
    int height, design_num;
    for (int i = 0; i <= 3; i++)
    {
        printf("\n");
    }
    
    printf("--------Welcome to pyramid !!!--------\n");
    printf("---------To get started enter the height of pyramid---------\n");
    printf("if height = 5 it will print a 5 line pyramid\n");
    printf("We have different types of pyramid design that will be listed below. Lets get started\n");
    printf("\nEnter the height of pyramid : ");
    scanf("%d", &height);
    do{
    printf("\n-------------Here are the pyramid designs-------------");
    printf("\n1. Right Angled pyramid");
    printf("\n2. Right Angled pyramid upside down");
    printf("\n3. Right Angled pyramid left alinged");
    printf("\n4. Right Angled pyramid left alinged upside down");
    printf("\n5. Normal pyramid");
    printf("\n6. Double Pyramid");
    printf("\nPlease enter the given symbol number of pyramid that you want to print out : ");
    scanf("%d", &design_num);

   
    if (design_num == 1)
    {
        right_angle_pyramid(height);
    }else if(design_num == 2){
        right_angle_pyramid_upsidedown(height);
    }else if(design_num == 3){
        rt_ang_pyramid_left_aligned(height);
    }else if(design_num == 4){
        rt_ang_pyramid_left_aligned_upsidedown(height);
    }else if(design_num == 5){
        normal_pyramid(height);
    }else if(design_num == 6){
        double_pyramid(height);
    }else{
        printf(" \nOoops no design found. Enter a valid number \n");
        break;
    }
    }while(design_num >= 1 || design_num <= 5);
    
        
}

int right_angle_pyramid(int height){
    for (int row = 0; row < height; row++)
    {
        for (int column = 0; column < row; column++)
        {
            printf("# ");
        }
        printf("\n");
    }
}
int right_angle_pyramid_upsidedown(int height){
    for (int row = height; row > 0; row--)
    {
        for (int column = 0; column < row; column++)
        {
            printf("# ");
        }
        printf("\n");
    }
}
int rt_ang_pyramid_left_aligned(int height){
    for (int row = 1; row <= height; row++)
    {
        for (int space = 0; space <= height - row - 1 ; space++)
        {
            printf("  ");
        }
        
        for (int column = 0; column < row; column++)
        {
            printf("# ");
        }
        printf("\n");
    }
}
int rt_ang_pyramid_left_aligned_upsidedown(int height){
    for (int row = height; row >= 0; row--)
    {
        for (int space = 0; space <= height - row - 1 ; space++)
        {
            printf("  ");
        }
        
        for (int column = 0; column < row; column++)
        {
            printf("# ");
        }
        printf("\n");
    }
}
int normal_pyramid(int height){
    for (int row = 0; row < height; row++)
    {
        for (int spaces = 0; spaces < height-row-1; spaces++)
        {
            printf(" ");
        }
        for (int column = 0; column < row; column++)
        {
            printf(" #");
        }
        printf("\n");
    }
}
int double_pyramid(int height){
    for (int row = 1; row <= height; row++)
    {
        for (int space = 0; space <= height - row - 1; space++)
        {
            printf("  ");
        }
        for (int column = 0; column < row; column++)
        {
            printf("# ");
        }
        for (int column2 = 0; column2 < row; column2++)
        {
            printf(" #");
        }
        printf("\n");
    }
}