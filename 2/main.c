#include <stdio.h>
int main (void)
{
    int i ;
    float sum=0 , avarege ;
    int x[10];
    for (i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    for (i=0;i<10;i++)
    {
        sum+=x[i];
    }
        avarege = sum/10;
    for (i=0;i<10;i++)
    {
        if (x[i]>x[i+1])
        {
            x[i+1]=x[i];
        }
        else ;
    }
    printf("%d",x[9]);
return 0;
}
