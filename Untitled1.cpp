#include <iostream>
using namespace std;
int main()
{
   int count=0,p2[]={};
    int p[]={1,4,6,3,6,9};
   int s1=sizeof(p)/sizeof(p[0]);
    int p1[]={5,3,7,1,2,6};
   int s2=sizeof(p1)/sizeof(p1[0]);
    for(int i = 0 ; i < s1; ++i)
        {
        for (int j = 0 ; j < s2; ++j)
        {
            if(p[i]==p1[j])
            {
                p2[count]=p2[j];
                count++;
            }
        }
        }
	cout<<"The number of common elements"<<count<<endl;
	cout<<"These are the common numbers: ";
	for (int k=0;k<count;k++){
		cout<<p2[k]<<" ";
	}
	return 0;

}
