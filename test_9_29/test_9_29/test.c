#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int num = 0;
    double cost = 0.0;
    int n = scanf("%d", &num);
    if (num <= 150)
        cost = num * 0.4463;
    else if (num < 400)
        cost = (num - 150) * 0.4663 + 150 * 0.4463;
    else
        cost = (num-400)*0.5663+250*0.4663+150*0.4463;
    printf("%.1lf", cost);
    
    return 0;
}