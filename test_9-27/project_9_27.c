#include<stdio.h>

int main()
{
    int h = 0;
    int r = 0;
    scanf("%d %d",&h,&r);
    double V = 3.14 * r * r * h;
    int num = (20000 / V) + 1;
    printf("%d",num);

    return 0;
}
