/*#include<stdio.h>

int main()
{
    int k = 0;
    int n = 0;
    scanf("%d",&k);
    double num = 0.0;
    while (num <= k)
    {
        n++;
        num += 1.0/n;
    }
    printf("%d",n);



    return 0;
}
*/
#include<stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int time = (c*60+d) - (a*60+b);
    int e,f;
    e = time / 60;
    f = time % 60;
    printf("%d %d",e,f);
    return 0;
}
