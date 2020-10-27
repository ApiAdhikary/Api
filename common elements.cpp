#include <iostream>
using namespace std;
int main()
{
    int p[4],p1[4],num=0,p2[]={};
    cout<<"Enter 6 numbers of the first array ";
    for(int a=0;a<6;a++)
    {
	cin>>p[a];
    }
    cout<<"Enter 6 numbers of the second array: ";
    for(int a=0;a<6;a++)
    {
	cin>>p1[a];
    }
    for(int i = 0 ; i < 6; ++i)
    for (int j = 0 ; j < 6; ++j)
    if(p[i]==p1[j]){
	{
		p2[num++] = p[j];
	}
    cout<<"Common numbers: ";
	for (int k=0;k<num;k++)
    {
		cout<<p2[k]<<" ";
	}}
	else
    {
       cout<<"No common element!\n";
    }
	return 0;

}
