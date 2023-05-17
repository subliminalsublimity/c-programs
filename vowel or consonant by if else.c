#include <stdio.h>

int main()
{
char a;
scanf("%c",&a);
if (a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
{
    printf("%c is a vowel",a);
}
   
else{
    printf("%c is a consonant",a);
}

    return 0;
}