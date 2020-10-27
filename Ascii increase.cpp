#include <iostream>
using namespace std;
void encode(string s,int j)
{
    cout<<s<<endl;
    cout<<j<<endl;
    int i;
    i=j;
    int len = s.length();
    for(i=j;i<len;i++)
    {
        s[i]=s[i]+2;
    }
    cout<<s;
}
int main()
{
    string sa="I am a student";
    int ja=2;
    encode(sa,ja);
    
}
