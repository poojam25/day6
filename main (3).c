#include<stdio.h>
int main()
{
  int arr[]={1,222,3,8,98,789};
  int lenght=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<lenght;i++){
      printf("%d ",arr[i]);
}
}
