#include <stdio.h>

int main()
{
int a;
scanf("%d",&a);
if (a%5==0&&a%11==0)
{
    printf("%d is divisible",a);
}
   
else{
    printf("%d is not divisible",a);
}

    return 0;
}N