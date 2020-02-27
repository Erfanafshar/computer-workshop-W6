#include <stdio.h>
int main (void)
{
    int i ;
    char x[5] = "Hello";
    x[5]='\0';
    for (i=0;i<5;i++)
    {
        printf("%c",x[i]);
    }
return 0;
}
