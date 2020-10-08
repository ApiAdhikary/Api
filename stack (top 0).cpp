#include <iostream>

using namespace std;

#define size 6
int top = 0 ;
char ch [size] ;

void push(char x)
{
    if(top > size )
    {
        cout << "STACK IS OVERFLOW!!" << endl ;
        return ;
    }
    else{

         ch [++top] = x ;


    }
}

char pop()
{
    if(top < 0)
    {
        cout << "STACK IS UNDERFLOW!!" << endl ;
        return '!';
    }
    else{

         return ch [top--] ;

    }
}

void show()
{
    if(top >= 0)
    {
        cout << "STACK ELEMANT'S ARE: " << endl ;
        for(int i=0 ; i<=top ; i++)
        {
            cout << ch [i] << " " ;
            cout << endl ;
        }
    }
    else{
        cout << "STACK IS EMPTY!!" << endl ;
    }
}

int main()
{
    int key ;
    while(true)
    {
     cout << "1.PUSH 2.POP 3.SHOW 4.EXITS" << endl ;

    cout << "PLEASE INSERT THE KEY: " ;
    cin >>  key ;

    switch(key)
    {


      case 1 :
            char ele ;
            cout << "PUSH ALL: " ;
            cin >> ele ;

            push(ele) ;
            break ;

      case 2 :
            cout << "DELETE ALL: " << pop() << endl ;
            break ;

      case 3 :
            show() ;
            break;

      case 4 :
           return 0 ;

    }

    }


}
