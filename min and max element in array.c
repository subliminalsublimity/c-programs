#include <stdio.h>

int main()
{
  int i,minn,maxn,t1;
  char  arr[5]={1,2,3,4,5};
  maxn=arr[0];
  minn=arr[0];
 
  for(i=0;i<5;i++){
      t1=arr[i];
    if(t1<minn){
        minn=t1;
    }
      if(t1>maxn){
      maxn=t1;
    }
  }
  printf("min=%d\nmax=%d",minn,maxn);
    return 0;
}
