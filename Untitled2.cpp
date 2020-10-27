#include <iostream>
using namespace std;
int main()
{
    int a1[]={1,4,8,3,6,9};
    int s1=sizeof(a1)/sizeof(a1[0]);
    int a2[]={5,3,7,1,2,6};
    int s2=sizeof(a2)/sizeof(a2[0]);
    cout<<"Output: ";
    for(int i=0;i<s1;++i)
        {
            for(int j=0;j<s2;++j)
                {
                    if(a1[i]==a2[j])
                        {
                            cout<<a1[i]<<" ";
                        }
                }
        }
    int b1[]={1,4,6,3,6,9};
    int si1=sizeof(b1)/sizeof(b1[0]);
    int b2[]={5,8,7,12,21,63};
    int si2=sizeof(b2)/sizeof(b2[0]);
    for(int i=0;i<si1;++i)
        {
            for(int j=0;j<si2;++j)
                {
                    if(a1[i]==a2[j])
                        {
                            cout<<a1[i]<<" ";
                        }
                }


        }
}



