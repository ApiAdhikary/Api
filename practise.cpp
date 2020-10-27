#include<iostream>
using namespace std;
int main()
{
    int mimo[10] = {32,4,5,12,5,54,6,23,3,5}, f[10];
    int n, j=0;
    cout<<"Enter the number to be searched: "<<endl;
    cin>>n;
    for(int i=0;i<10;i++)
    {
        if(n==mimo[i]){
        f[j]=i;
        j++;
    }
    }

        for(int i=0;i<j;i++)
        cout<<n<<"was found in index"<<f[i]<<"of the array"<<endl;
    return 0;

}
