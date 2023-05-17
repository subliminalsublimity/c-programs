#include <stdio.h>

int main()
{
  int i,smax,maxn,t1;
  int a[5]={5,2,3,4,6};
  maxn=a[0];
  smax=a[0];
  for(i=0;i<5;i++){
      t1=a[i];
      if(t1>maxn){
      maxn=t1;
    }
    if(t1>smax && t1!=maxn){
    smax=t1;
    }
  }
  printf("second largest=%d",smax);
    return 0;
}