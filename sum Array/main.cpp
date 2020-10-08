#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
  int src[4]={3,4,2,1};
  int dest[4];
  copy(src,src+4,dest);
  for(int i=0;i<4;i++)
    cout<<"dest[i]<<endl;
  return 0 ;
}
