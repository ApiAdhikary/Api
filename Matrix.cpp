#include <iostream>
using namespace std;
int main()
{
   int a[10][10],transpose[10][10],row,column,i,j;
   cout << "Enter rows of matrix: ";
   cin>>row;
   cout<<"Enter columns of matrix: ";
   cin >>column;
   cout<<"\nEnter numbers of matrix: " <<endl;
   for (int i=0;i<row;++i)
        {
            for (int j=0;j<column;++j)
              {
                  cout<<"Enter number a" <<i+1<<j+1<< ": ";
                  cin >>a[i][j];
              }
        }
        cout<<"\nMatrix_1: "<<endl;
        for(int i=0;i<row;++i)
             {
                 for(int j=0;j<column;++j)
                    {
                           cout<<" "<<a[i][j];
                           if(j==column-1)
                           cout<<endl<<endl;
                    }
             }
             for (int i=0;i<row;++i)
             for (int j=0;j<column;++j)
                   {
                           transpose[j][i]=a[i][j];
                   }
            cout<<"\nOutput:" << endl;
            for (int i=0;i<column; ++i)
            for (int j=0;j<row;++j)
                {
                     cout<<" "<<transpose[i][j];
                     if(j==row-1)
                     cout<<endl<<endl;
                }
  return 0;
}

