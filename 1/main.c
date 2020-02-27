#include <stdio.h>
int main (void)
{
    const int a=5 ;
    int x[a];
    int i ;
    for (i=0;i<5;i++)
    {
        scanf ("%d",&x[i]);
    }
    for (i=4;i>=0;i--)
    {
        printf("%d",x[i]);
    }
    return 0;
}
