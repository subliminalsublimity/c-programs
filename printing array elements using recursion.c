#include <stdio.h>

int main()
{
    int i,a[10];
    for(i=0;i<10;i++)
    printf("%d%d%p",i,a[i],a+i);
    
    return 0;
}
