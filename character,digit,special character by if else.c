#include <stdio.h>

int main()
{

char a;
scanf("%c",&a);
if (a>='a'&& a<='z' || a>='A' && a<='Z')
{
    printf("%c is a alphabet",a);
}
else if(a=='1'||a=='2'||a=='3'||a=='4'||a=='5'||a=='6'||a=='7'||a=='8'||a=='9'||a=='0')
    
{
    printf("%c is a digit",a);
}
else{
    printf("%c is a special character",a);
}

    return 0;
}
