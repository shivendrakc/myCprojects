#include <stdio.h>
#include <windows.h>

int main()
{
    int h, m, s;
    int d = 1000;
    printf("Set Time : \n");
    printf("Hour: ");
    scanf("%d", &h);
    printf("Minutes: ");
    scanf("%d", &m);
    printf("Seconds: ");
    scanf("%d", &s);

    if (h > 12 || m > 60 || s > 60)
    {
        printf("Value Error.");
        exit(0);
    }
    while (1)
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 12)
        {
            h = 1;
        }
        printf("Clock: ");
        printf("%02d:%02d:%02d", h, m, s);
        Sleep(d);
        system("cls");
    }
    return 0;
}