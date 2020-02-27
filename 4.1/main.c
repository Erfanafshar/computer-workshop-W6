#include <stdio.h>
int main (void)
{
    int i ;
    char x[5]= "bye";
    x[5]='\0';
    for (i=0 ; i<5 ; i++)
    {
        if (x[i]==0)
        {
            break;
        }
        else ;
    }
printf("%d",i);
return 0;
}
