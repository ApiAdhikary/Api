#include<iostream>
#include <conio.h>
#include<string.h>
using namespace std;
int main()
{
   int i,j,n,temp ,arr[50];
   cout<<"Enter the number" <<endl;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cout<<"Enter the number of elements in array=" ;
       cin>>arr[i];
   }
   j=i-1;
   for( i=0;i<j;i++)
   {
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp ;
       j--;
   }
   cout<<"\n After reverse of array elements:" ;
   for(i=0 ; i<n;i++)
   {
       cout<<"\nt"<<arr[i];
   }


}
