#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    (ch>='A')&& (ch<='Z')||(ch>='a')&& (ch<='z')?printf("it is an alphabet"):printf("it is not an alphabet");
    return 0;
}


