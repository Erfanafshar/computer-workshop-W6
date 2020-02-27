#include <stdio.h>
int main (void)
{
    int temp , i ;
    int x[5];
    scanf("%d%d%d%d%d",&x[0],&x[1],&x[2],&x[3],&x[4]);
    for (i=0;i<5;i++)
    {
        if (x[i]>x[i+1])
        {
            temp=x[i];
            x[i]=x[i+1];
            x[i+1]=temp;
        }
        else ;
    }
    printf("%d%d%d%d%d",x[0],x[1],x[2],x[3],x[4]);
}
