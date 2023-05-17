#include <stdio.h>

int main()
{
  int i, a[5]={1,2,3,4,5},sum=0;
  for(i=0;i<5;i++){
      sum=sum+a[i];
  }
  printf("%d",sum);
    return 0;
}
