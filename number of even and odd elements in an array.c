#include <stdio.h>

int main()
{
  int i,n,m,counte,counto,a[100];
  printf("enter the size of array=");
  scanf("%d",&n);
  
  printf("enter the number of elements=");
  scanf("%d",&m);
  a[m];
  counte=0;
  counto=0;
  if (m>n){
      printf("overflow");
      
  }
  else 
  {
      for(i=0;i<m;i++)
      {
          scanf("%d",&a[i]);
      }
  for(i=0;i<m;i++)
  {
     
      if(a[i]%2==0)
      {
      counte=counte+1;
      }
      else
      counto=counto+1;
        
      }
    }
    printf("number of even elements=%d\n",counte);
  printf("number of odd elements=%d",counto);
    return 0;
}
